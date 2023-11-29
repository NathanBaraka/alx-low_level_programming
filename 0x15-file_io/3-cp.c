#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

// Function to exit with an error message and code
void exitWithError(int code, const char *message, const char *arg) {
    dprintf(STDERR_FILENO, message, arg);
    exit(code);
}

// Function to allocate a buffer for reading/writing
char *createBuffer(const char *file) {
    char *buffer = malloc(BUFFER_SIZE);

    if (buffer == NULL) {
        exitWithError(99, "Error: Can't write to %s\n", file);
    }

    return buffer;
}

// Function to close a file descriptor and exit if there's an error
void closeFile(int fd) {
    if (close(fd) == -1) {
        exitWithError(100, "Error: Can't close fd %d\n", fd);
    }
}

int main(int argc, char *argv[]) {
    // Check if the correct number of arguments is provided
    if (argc != 3) {
        exitWithError(97, "Usage: %s file_from file_to\n", argv[0]);
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    // Create a buffer for reading/writing
    char *buffer = createBuffer(file_to);

    // Open the source file for reading
    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        exitWithError(98, "Error: Can't read from file %s\n", file_from);
    }

    // Open or create the destination file for writing
    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (fd_to == -1) {
        closeFile(fd_from);
        exitWithError(99, "Error: Can't write to %s\n", file_to);
    }

    ssize_t bytesRead, bytesWritten;

    // Copy data from source to destination in chunks
    do {
        bytesRead = read(fd_from, buffer, BUFFER_SIZE);
        if (bytesRead == -1) {
            closeFile(fd_from);
            closeFile(fd_to);
            exitWithError(98, "Error: Can't read from file %s\n", file_from);
        }

        bytesWritten = write(fd_to, buffer, bytesRead);
        if (bytesWritten == -1) {
            closeFile(fd_from);
            closeFile(fd_to);
            exitWithError(99, "Error: Can't write to %s\n", file_to);
        }

    } while (bytesRead > 0);

    // Free allocated buffer and close file descriptors
    free(buffer);
    closeFile(fd_from);
    closeFile(fd_to);

    return 0;
}


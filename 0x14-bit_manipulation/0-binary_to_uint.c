#include “main.h”

unsigned int binary_to_uint(const char *b);

/**
 * binary_to_uint – The function converts the binary no. to an unasigned integer.
 * @b - This is a pointer that points to a string of 0s and 1s characters.
 * Return- The converted number is returned or zero.
 *  string @b if it is not 1 or 0, or if @b is NULL.
 */
unsigned int binary_to_uint(const char *b) {
  unsigned int result = 0;
      if (b == NULL)
      return 0;
        while (*b != '\0') {
         if (*b != '0' && *b != '1')
         return 0;
        result = (result << 1) + (*b - '0');
             b++;
    }

   return result;
}


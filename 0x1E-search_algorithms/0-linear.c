#include "search_algos.h"

/**
 * linear_search - This itterates through an array via linear.
 * @array: Points to the first pointer.
 * @size: Elements of the array.
 * @value: The search value.
 *
 * Return: Array is non or no val, -1.
 *        else, the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
        size_t i;


        /* Checks if the array is NULL */
        if (array == NULL)
                return (-1);


        /* Iterates over each element of the array */
        for (i = 0; i < size; i++)
        {
                /* Prints the value being checked */
                printf("Value checked array[%ld] = [%d]\n", i, array[i]);


                /* If the value is found */
                if (array[i] == value)


                        /* Returns the index of the value */
                        return (i);
        }


        /* Value is not found, return -1 */
        return (-1);
}


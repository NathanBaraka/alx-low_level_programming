#include "search_algos.h"


/**
 * binary_search - Itterates through a sorted array using binary search.
 * @array: The pointer to the val and index 0.
 * @size: Total number of values in the array.
 * @value: The value to search for.
 *
 * Return: If the val is not present, -1.
 *         else, the index where the value is located.
 */


int binary_search(int *array, size_t size, int value)
{
        size_t i, left, right;
        
        /* Checks if the array is NULL */
        if (array == NULL)
                return (-1);


        /* Performs a binary search */
        for (left = 0, right = size - 1; right >= left;)
        {
                printf("Searching in array: ");
                for (i = left; i < right; i++)
                        printf("%d, ", array[i]);
                printf("%d\n", array[i]);
                
                /* Calculates the middle index */
                i = left + (right - left) / 2;
                
                /* If the middle element is the value */
                if (array[i] == value)
                        /* Return the index */
                        return (i);
                
                /* If the middle element is greater than the value */
                if (array[i] > value)
                        /* Update the right boundary */
                        right = i - 1;
                else
                        /* else, update the left boundary */
                        left = i + 1;
        }
        /* Value is not found, return -1 */
        return (-1);
}

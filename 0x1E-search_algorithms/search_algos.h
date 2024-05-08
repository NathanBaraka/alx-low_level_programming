#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>

/**
 * linear_search - Searches for a value in an array using linear search.
 * @array: Pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if value is not present
 *         or if the array is NULL.
 */
int linear_search(int *array, size_t size, int value);

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if value is not present
 *         or if the array is NULL.
 */
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */


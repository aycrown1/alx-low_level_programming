#include "search_algos.h"
int _binary_search(int *array, size_t left, size_t right, int value);

/**
 * exponential_search - searches for a value in a sorted array of integers
 *			using exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located,
 *			-1 if value is not present or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, right;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i << 1;
	}

	right = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i >> 1, right);
	return (_binary_search(array, i >> 1, right, value));
}


/**
  * _binary_search - Searches for a value in a sorted array of integers
  *			using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;
	if (array == NULL)
		return -1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return mid;

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}

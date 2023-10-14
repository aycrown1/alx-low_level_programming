#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: array to print
 * @left: left index
 * @right: right index
 **/
void print_array(const int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[right]);
}

/**
 * advanced_binary_recursive - recursively searches for a value
 *			in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @left: left index
 * @right: right index
 * @value: the value to search for
 * Return: the index where value is located,
 *			-1 if value is not present or if array is NULL
 **/
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right >= left)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			else
				return advanced_binary_recursive(array, left, mid, value);
		}
		else if (array[mid] > value)
			return advanced_binary_recursive(array, left, mid, value);
		else
			return advanced_binary_recursive(array, mid + 1, right, value);
	}
	return (-1);
}

/**
 * advanced_binary - initiates the recursive advanced binary search function
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located, -1 if value is not present or if array is NULL
 **/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}

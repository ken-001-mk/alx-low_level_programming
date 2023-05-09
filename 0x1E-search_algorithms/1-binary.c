#include"search_algos.h"

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers
 * @array: pointer to first element of array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: return -1, if value is not present in array or is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int i, left, right;

	if (!array)
		return (-1);
	for (left = 0, right = (int)size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}

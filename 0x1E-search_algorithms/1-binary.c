#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where the value is located, or -1 if it is not found
 */

int binary_search(int *array, size_t size, int value)
{
		size_t left = 0;
		size_t right = size - 1;
		size_t i;

		if (array == NULL)
			return (-1);
		while (left <= right)
		{
		size_t mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
			printf(", ");
		}
		printf("\n");
		}
	return (-1);
}


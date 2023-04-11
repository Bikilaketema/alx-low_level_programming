#include <stdio.h>
#include <stdlib.h>
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
    int low, high, mid;
    size_t i = 0;

    if (array == NULL) {
        return -1;
    }

    low = 0;
    high = size - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (array[mid] == value) {
            return mid;
        }
        else if (array[mid] < value) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }

        /* Print the current state of the array*/
        printf("Array: [ ");
        for (i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("]\n");
    }

    return -1;
}


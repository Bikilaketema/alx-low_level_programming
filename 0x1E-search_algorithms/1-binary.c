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

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {  // check if array is NULL
        return -1;
    }
    
    int left = 0;  // leftmost index
    int right = size - 1;  // rightmost index
    
    while (left <= right) {
        int mid = (left + right) / 2;  // calculate the middle index
        
        printf("Searching in array: ");
        for (int i = left; i <= right; i++) {  // print the current subarray
            printf("%d ", array[i]);
        }
        printf("\n");
        
        if (array[mid] == value) {
            return mid;  // value found at index mid
        } else if (array[mid] > value) {
            right = mid - 1;  // search in the left half
        } else {
            left = mid + 1;  // search in the right half
        }
    }
    
    return -1;  // value not found
}


#include <stdio.h>
#include "search_algos.h"

#define UNUSED(x) (void)(x)

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 7;
    int index = 0;

    binary_search(array, size, value);
    return (EXIT_SUCCESS);
}


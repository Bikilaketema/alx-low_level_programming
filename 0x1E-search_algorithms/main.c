#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 5;

    int index = linear_search(array, size, value);

    if (index == -1)
    {
        printf("Value %d not found\n", value);
    }
    else
    {
        printf("Value %d found at index %d\n", value, index);
    }

    return (0);
}


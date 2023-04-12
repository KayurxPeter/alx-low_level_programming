#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for in array
 *
 * Return: return the first index where value is located
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

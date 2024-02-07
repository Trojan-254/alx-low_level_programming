#include "search_algos.h"

/**
 * jump_search - looks for a value in a sorted arrey
 * @array: pointer to the first element of the array
 * @size: number of elements in an array
 * @value: value to search for
 * Return: index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t i = 0;
	size_t j = 0;

	if (array == NULL)
		return (-1);

	while (j < size && array[j] < value)
	{
		printf("Value checked array[%lu] = [%d\n]", j, array[j]);
		i = j;
		j += jump;
	}
	printf("Value found between indexes[%lu] and [%lu]\n", i, j);
	j = j < size - 1 ? j : size - 1;
	while (i <= j)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

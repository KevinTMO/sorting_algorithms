#include "sort.h"

/**
 *
 *
 *
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t index, temp, turn = 1;

	if (!(array) || size < 2)
	{
		return;
	}

	while (turn)
	{
		turn = 0;
		for (index = 0; index < size - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
				print_array(array, size);
				turn = 1;
			}
		}
		if (turn == 0)
		{
			return;
		}
	}
}

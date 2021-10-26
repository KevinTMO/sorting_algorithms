#include "sort.h"

/**
 *
 *
 *
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t temp, idx, arrIdx, minIdx;

	if (size < 2)
		return;

	for (idx = 0; idx < size - 1; idx++)
	{
		minIdx = idx;
		for (arrIdx = idx + 1; arrIdx < size; arrIdx++)
		{
			if (array[minIdx] > array[arrIdx])
			{
				minIdx = arrIdx;
			}
		}

		if (minIdx != idx)
		{
			temp = array[minIdx];
			array[minIdx] = array[idx];
			array[idx] = temp;
			print_array(array, size);
		}
	}
}

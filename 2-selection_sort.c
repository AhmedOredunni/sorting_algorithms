#include "sort.h"


/**
 * selection_sort - Sort using selection sort algorithm
 * @array: The array of integer to sort
 * @size: Size of the array to sort
 * Return: Nothing
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		size_t min;

		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swap(&array[i], &array[min]);
			/*Print the array after swap*/
			for (k = 0; k < size; k++)
			{
				printf("%d ", array[k]);
			}
			printf("\n");
		}
	}
}

#include "sort.h"

/**
 * bubble_sort - Uses Bubble algorithm to sort array
 * @array: Array of integer to sort
 * @size: Size of the array to sort
 * Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
	bool flag;
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				flag = 1;
				/*Print the array after swap*/
				for (k = 0; k < size; k++)
				{
					printf("%d ", array[k]);
				}
				printf("\n");
			}
		}
		if (flag == 0)
			break;
	}
}

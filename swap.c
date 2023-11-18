#include "sort.h"

/**
 * swap - Swap two integer
 * @a: First integer to swap
 * @b: Second integer to swap
 * Reture: Nothing
*/
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

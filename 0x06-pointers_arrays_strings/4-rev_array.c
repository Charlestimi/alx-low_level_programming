#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array
 * @n: elements in the array
 *
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
}

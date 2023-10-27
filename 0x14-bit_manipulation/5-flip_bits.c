
#include "main.h"


/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int y, cntbits = 0;

	unsigned long int present;

	unsigned long int flips = n ^ m;

	for (y = 63; y >= 0; y--)

	{
		present = flips >> y;

		if (present & 1)

			cntbits++;
	}

	return (cntbits);
}

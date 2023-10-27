#include "main.h"
/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int z;

	num = 1;
	for (z = 1; z <= power; z++)
	{	
		num * = base;
	}
	return (num)
}
/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int division, search;
	char flag
		;
	flag = 0;
	division = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (division != 0)

	{
		search = n & division;
		if (search == division)

		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || division == 1)
		{
			_putchar('0');

		}
		division >>= 1;
	}
}

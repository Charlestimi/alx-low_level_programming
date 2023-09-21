#include "main.h"

/**
 * _strncpy - copy a  string
 * @dest: string one
 * @src: string two
 * @n: number of bytes to copy
 *
 * Return: a pointer to the resulting string (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for ( ; a < n; a++)
		dest[a] = '\0';

	return (dest);
}

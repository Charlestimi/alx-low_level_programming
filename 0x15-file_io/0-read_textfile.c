#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to read
 * Return: w- exact number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fp;
	ssize_t p;
	ssize_t w;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	w = read(fp, buf, letters);
	p = write(STDOUT_FILENO, buf, w);

	free(buf);
	close(fp);
	return (p);
}

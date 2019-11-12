#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The file name
 * @letters: The number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *b;
int l, i, j;

b = malloc(sizeof(size_t) * letters);
if (b == NULL)
return (0);
if (filename == NULL)
{
free(b);
return (0);
}
i = open(filename, O_RDWR);
if (i == -1)
return (0);
l = read(i, b, letters);
if (l > 0)
{
j = write(STDOUT_FILENO, b, l);
if (j != l || j == -1)
return (0);
}
close(i);
free(b);
return (l);
}


#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * main - copie the content of a file into another
 * @argc: the number of arguments
 * @argv: the pointer to argument
 * Return: 0
 */
int main(int argc, char **argv)
{
int l = 0, i = 0, k = 0, j = 0;
char *b;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
b = malloc(1024);
if (b == NULL)
return (0);
i = open(argv[1], O_RDONLY);
if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
k = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (k == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
l = read(i, b, 1024);
if (l == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
while (l > 0)
{
j = write(k, b, l);
if (j == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
l = read(i, b, 1024);
}
if (close(i) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close i %d\n", i);
exit(100);
}
if (close(k) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close i %d\n", i);
exit(100);
}
return (0);
}

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * create_file - Create a new file
 * @filename: The file name
 * @text_content: the text content of the file
 * Return: 1 if created and -1 if not
 */
int create_file(const char *filename, char *text_content)
{
int i = 0, j = 0, l = 0;

if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";
i = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
if (i == -1)
return (-1);
while (text_content[l])
l++;
j = write(i, text_content, l);
if (j == -1)
return (-1);
return (1);
}

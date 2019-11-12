#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file name
 * @text_content: the text conten to add
 * Return: 1 if add else 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
int i = 0, l = 0;

if (filename == NULL)
return (-1);
if (text_content == NULL && filename == NULL)
return (-1);
else if (text_content == NULL)
return (1);
i = open(filename, O_WRONLY | O_APPEND);
while (text_content[l])
l++;
if (write(i, text_content, l) < 0)
return (-1);
close(i);
return (1);
}

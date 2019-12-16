#include "holberton.h"
/**
*_isupper - check the char inserted
* @c: char recived
*
*Return: 1 if is upper else 0
*/
int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
return (1);
else
return (0);
}

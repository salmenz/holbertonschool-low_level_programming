#include "holberton.h"
/**
* _isalpha - chack for aplphabetic character
* @c: character recieved
*
*Return: 1 a letter 0 otherwise
*/
int _isalpha(int c)
{
if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
return (1);
else
return (0);
}

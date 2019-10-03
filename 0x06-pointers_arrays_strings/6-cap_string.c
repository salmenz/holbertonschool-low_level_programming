#include <stdio.h>
/**
 * cap_string - function
 *
 * @s: function input
 * Return: Always return 0
 */
char *cap_string(char *s)
{
int j;

j=0;
while (s[j] != '\0')
{
if (s[j] == ' ' || s[j] == '\t' || s[j] == '\n' || s[j] == ',' || s[j] == ';' || s[j] == '.' || s[j] == '!' || s[j] == '?' || s[j] == '"' || s[j] == '(' || s[j] == ')' || s[j] == '{' || s[j] == '}')
if (s[j + 1] >= 'a' && s[j + 1] <= 'z')
s[j + 1] = s[j + 1] - 32;
j++;
}
if (s[0] >= 'a' && s[0] <= 'z')
s[0] = s[0] - 32;
return (s);
}

#include "main.h"
/**
 *string_toupper - change lowercase string to uppercase
 *@str: string to be transformed to uppercase
 *Return: uppercase string
 */
char *string_toupper(char *str)
{
int i;

i = 0;
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;

i++;
}
return (str);
}

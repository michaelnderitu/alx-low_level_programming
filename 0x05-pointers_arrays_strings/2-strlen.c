#include "main.h"
/**
 *_strlen - lenght of string
 *@s: character of string
 *Return: Always 0
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
}
return (length);
}

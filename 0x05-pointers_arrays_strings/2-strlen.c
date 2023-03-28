#include "main.h"
/**
 *_strlen - lenght of string
 *@s: character of string
 *Return: Always 0
 */
int _strlen(char *s)
{
int length;

while (*s++)
{
length++;
}
return (length);
}

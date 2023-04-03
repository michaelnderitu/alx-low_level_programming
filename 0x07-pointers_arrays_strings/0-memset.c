#include "main.h"
/**
 *_memset - fills memory with constant byte
 *@n: bytes of mem area pointed to by @s
 *@s: with the constant byte @b
 *@b: mem area pointer
 *Return: a pointer to the mem area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}

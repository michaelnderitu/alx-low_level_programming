#include "main.h"
/**
 *_memcpy - copies @n bytes from mem area @src to mem area @dest
 *@n: function copies
 *@src: bytes from mem area
 *@dest: to mem area
 *Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}

#include "main.h"
/**
 *print_rev - print string in reverse format
 *@s: character of a string
 *Return:void
 */
void print_rev(char *s)
{
int m = 0;
int r;
while (*s != '\0')
{
m++;
s++;
}
s--;
for (r = m; r > 0; r--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}

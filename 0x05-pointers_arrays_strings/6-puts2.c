#include "main.h"
#include <string.h>
/**
 *puts2 - prints string
 *@str: pointer variable
 *Return: void
 */
void puts2(char *str)
{
int m = 0;
int n = 0;
char *p = str;
int o;

while (*p != '\0')
{
p++;
m++;
}
n = m -1;
for (o = 0; o <= n; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}

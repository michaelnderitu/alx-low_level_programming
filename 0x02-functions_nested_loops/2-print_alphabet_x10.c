#include "main.h"
/**
 *print_alphabet - print alphabets in lower-case
 *
 *Return: void
 */
void print_alphabet(void)
{
char i;
int j;
for (j = 0; j <= 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
_putchar('\n');
}

#include "main.h"
/**
 *print_alphabet_x10 - print alphabets in lower-case 10 lines
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
char i;
int j;
for (j = 0; j <= 9; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}

#include "main.h"
/**
 *print_most_numbers - function that prints numbers 0 to 9 excluding 2 & 4
 *for - loop through our function
 *while - loop through our for loop
 */
void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
if (!(c == '2' || c == '4'))
_putchar(c);
}
_putchar('\n');
}

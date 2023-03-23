#include "main.h"
/**
 *_isdigit - a function that checks if c is a digit
 *@c: a parameter required by our function
 *Return: 1 if c is a digit or 0 when otherwise
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
return (1);
else
return (0);
}

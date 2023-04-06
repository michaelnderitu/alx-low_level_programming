#include "main.h"
/**
 *factorial - returns the factorial of an integer
 *@n: the integer whose factorial is returned
 *
 *Return: the factorial of @n
 */
int factorial(int n)
{
int i;

if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
i = n * factorial(n - 1);
}
return (i);
}

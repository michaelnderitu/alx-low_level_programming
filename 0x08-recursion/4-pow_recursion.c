#include "main.h"
/**
 *_pow_recursion - return the value of @x to the power of @y
 *@x: the value of x
 *@y: to the power of y
 *
 *Return: value of @x to the power of @y
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y != 0)
{
return (x * _pow_recursion(x, y - 1));
}
else
{
return (1);
}
}

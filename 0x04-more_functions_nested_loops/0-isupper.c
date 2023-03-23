#include "main.h"
/**
 *_isupper - function checking for uppercase character
 *@c: the parameter required by our function
 *Return: 1 on success or 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

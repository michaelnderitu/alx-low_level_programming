#include "main.h"
/**
 *leet - encode a string to 1337
 *@str: the string to be encoded
 *Return: a pointer to the encoding string
 */
char *leet(char *str)
{
int i;
int j;

i = 0;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[i])
{
for (j = 0; j <= 7; j++)
{
if (str[i] == leet[j] ||
str[i] - 32 == leet[j])
str[i] = j + '0';
}
i++;
}
return (str);
}

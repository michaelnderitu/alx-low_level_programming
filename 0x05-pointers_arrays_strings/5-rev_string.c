#include "main.h"
/**
 *rev_string - reverse a string
 *@s: character of a string
 *Return: void
 */
void rev_string(char *s)
{
char m = s[0];
int count = 0;
int i;

while (s[count] != '\0')
count++;
for (i = 0; i < count; i++)
{
count--;
m = s[i];
s[i] = s[count];
s[count] = m;
}
}

#include "main.h"
/**
 *_strstr - locates a substring
 * @haystack: the longer string to search
 *@needle: the first occurrence of the substring
 *Return: a pointer beg of substring or @Null if it not foound.
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}

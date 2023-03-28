#include "main.h"
/**
 *swap_int - swaps two integers
 *@a: pointer of wihch one integer will be
 *@b: pointer of which another integer will be
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}

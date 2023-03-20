#include <stdio.h>

/**
 * main - Entry point
 * printf - prints the size of the computer
 * Return: Always 0
 */

int main(void)
{
printf("Size of char: %d byte(s)\n", sizeof(char));
printf("Size of int: %d byte(s)\n", sizeof(int));
printf("Size of float: %lu bytes(s)\n", sizeof(float));
printf("Size of double: %lu byte(s)\n", sizeof(double));
printf("Size of long: %lu byte(s)\n", sizeof(long));
return (0);
}

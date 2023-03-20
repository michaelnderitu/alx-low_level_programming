#include <stdio.h>

/**
 * main - Entry point
 * printf - prints the size of the computer
 * Return: Always 0
 */

int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of a int: %d byte(s)\n", sizeof(int));
printf("Size of a float: %lu bytes(s)\n", sizeof(float));
printf("Size of a double: %lu byte(s)\n", sizeof(double));
printf("Size of a long int: %lu byte(s)\n", sizeof(long));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
return (0);
}

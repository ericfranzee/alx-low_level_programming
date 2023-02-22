#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	long a = 0;
	long b = 1;

	for (counter = 0; counter < 50; counter++)
	{
		printf("%li, %li, ", a, b);
		a += b;
		b += a;

	if (counter== 49)
		printf("\n");
	else
		printf(", ");
}
	return (0);
}

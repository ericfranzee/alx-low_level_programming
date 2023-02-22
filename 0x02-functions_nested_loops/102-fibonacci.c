#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	long a = 0;
	long b = 1, sum;

	for (counter = 0; counter < 50; counter++)
	{
		sum = a + b;
		printf("%li", sum);
		a = b;
		b = sum;

	if (counter == 49)
		printf("\n");
	else
		printf(", ");
	}
	return (0);
}

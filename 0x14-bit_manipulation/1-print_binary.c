#include "main.h"

/**
 * print_binary - prints the binary equivalent
 * of a decimal number.
 * @n: number to print in binary.
 */
void print_binary(unsigned long int n)
{

	unsigned long int n_copy = n, mask = 1;
	int lenght = 0;

	while (n_copy > 0)
	{
		lenght++;
		n_copy >>= 1;
	}
	lenght -= 1;

	if (lenght > 0) /* create mask based on length of number */
		mask = mask << lenght;

	while (mask > 0) /* match each rightmost bit to see if 1 or 0 */
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}

/*
 * another method without creating a lengthy mask (100...)
 *
 * while (len >= 0)
 * {
 *    if ((n >> len) & 1)
 *        _putchar('1');
 *    else
 *        _putchar('0');
 *
 *    len--;
 * }
 */

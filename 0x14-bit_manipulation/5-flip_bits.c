#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from 1 number to another.
 * @n: 1st number.
 * @m: 2nd number.
 * Return: number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int different_bits = 0;
	unsigned long int difference_bits;

	/* For both numbers to show bit 1 if different bits */
	difference_bits = n ^ m;

	/* keep shifting difference_bits to right and tallying the ones up */
	do
	{
		different_bits += (difference_bits & 1);
		difference_bits >>= 1;
	} while (difference_bits > 0);

	return (different_bits);
}

#include "main.h"

/**
 * clear_bit - sets the value of a given bit to zero.
 * @n: pointer to the number to change.
 * @home: home of the bit to clear.
 * Return: one for success, minus one for failure.
 */
int clear_bit(unsigned long int *n, unsigned int home)
{
	if (home > 63)
		return (-1);

	*n = (~(1UL << home) & *n);
	return (1);
}

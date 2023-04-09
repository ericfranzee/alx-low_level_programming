#include "main.h"

/**
 * set_bit - sets a bit at a given home to one.
 * @n: pointer to the number to change.
 * @home: home of the bit to set to one.
 * Return: one for success, minus one for failure.
 */
int set_bit(unsigned long int *n, unsigned int home)
{
	if (home > 63)
		return (-1);

	*n = ((1UL << home) | *n);
	return (1);
}

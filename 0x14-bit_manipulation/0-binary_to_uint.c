#include "main.h"

/**
 * binary_to_uint - to convert a binary number to an
 * unsigned integer.
 * @b: binary number.
 *
 * Return: unsigned integer.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int length, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}

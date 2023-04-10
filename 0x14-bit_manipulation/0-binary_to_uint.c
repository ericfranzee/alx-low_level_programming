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
	int str_len, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (str_len = 0; b[str_len] != '\0'; str_len++)
		;

	for (str_len--, base_two = 1; str_len >= 0; str_len--, base_two *= 2)
	{
		if (b[str_len] != '0' && b[str_len] != '1')
		{
			return (0);
		}

		if (b[str_len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}

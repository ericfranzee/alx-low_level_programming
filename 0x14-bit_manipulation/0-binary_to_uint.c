#include "main.h"

/**
 * binary_to_uint - to converts a binary num to an unsigned intiger.
 * @b: binary.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int string_lenght, base_2;

	if (!b)
		return (0);

	ui = 0;

	for (string_lenght = 0; b[string_lenght] != '\0'; string_lenght++)
		;

	for (string_lenght--, base_2 = 1; string_lenght >= 0;
		 string_lenght--, base_2 *= 2)
	{
		if (b[string_lenght] != '0' && b[string_lenght] != '1')
		{
			return (0);
		}

		if (b[string_lenght] & 1)
		{
			ui += base_2;
		}
	}

	return (ui);
}
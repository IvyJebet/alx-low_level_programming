#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * @n: A pointer to the unsigned long integer that is to be modifies
 * @index: The index of the bit to set (0-based)
 *
 * Return: 1 if it works, -1 in case of an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}

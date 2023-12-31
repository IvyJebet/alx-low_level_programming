#include "main.h"
/**
 * _memset - Fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @a: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char a, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = a;
		n--;
	}
	return (s);
}

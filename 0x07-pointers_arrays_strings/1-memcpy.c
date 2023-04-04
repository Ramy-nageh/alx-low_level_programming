#include "main.h"
/**
 * _memcpy - fills memory with another buffer.
 * @d: source string
 * @src: string for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memcpy(char *d, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(d + x) = *(src + x);
		x++;
	}
	return (d);
}

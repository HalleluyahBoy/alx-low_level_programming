#include "main.h"
/**
 * _memset -Fills the first n bytes of the memory area
 * @s: A pointer to the memory area with.
 * @c: The character to filled
 * @n: The character to br filled
 *
 * Return: A pointer to the filled memory area @s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory)
}

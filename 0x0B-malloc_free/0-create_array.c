#include "main.h"
#include <stdlib.h>

/**
 *create_array - A function that creates an array, initializes it with char.
 * @size: size of array
 * @c: char to assign
 *
 * Return: A pointer to the array, NUll if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

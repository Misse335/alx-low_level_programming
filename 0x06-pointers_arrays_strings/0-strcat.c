#include "main.h"

/*_strcat - concatenates two strings
 * description: A function tha concatenates two strings
 *
 * @dest: input value
 * @src: input value
 * @n: number of bytes from src to be apended to destination
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

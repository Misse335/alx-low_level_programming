#include <stdio.h>
#include "main.h"

/*
 * 102.magig - A program where adding one line to this code,will print a program prints a[2] = 98
 *
 * Return 0.
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 *- you are not allowed to use a
	 - you are not allowed to modify p
	 - only one statement
	 - you are not allowed to code anything else than this line of code
	 */

	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);

	return (0);
}

#include <stdio.h>
/**
 * main - print decimal without char
 *
 * return: (0) always on success
 *
 */
int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - print decimals
 *
 * Return; (0) always success
 *
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}

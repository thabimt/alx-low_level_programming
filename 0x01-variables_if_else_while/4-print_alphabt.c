#include <stdio.h>
/**
 * main - prints alphabets except q and e
 *
 * return: always (0) success
 *
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

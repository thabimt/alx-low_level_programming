#include <stdio.h>
/**
 * main - prints alphaBETS
 *
 * return: always (0)
 *
 */
int main(void)
{
	char lowerbet = 'a';
	char alphabet = 'A';

	while (lowerbet <= 'z')
	{
		putchar(lowerbet);
		lowerbet++;
	}
	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

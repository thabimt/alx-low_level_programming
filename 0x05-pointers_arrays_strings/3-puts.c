#include "main.h"
/**
 * _puts - print string followed by a new line
 *
 * @str: prints string
 */
void _puts(char *str)
{

	for (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

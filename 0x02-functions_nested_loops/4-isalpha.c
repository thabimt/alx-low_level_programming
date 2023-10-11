#include "main.h"
/**
*_isalpha - return 1 when c is cap or low
*
*Description:use _putchar to print
*
*@c: collect the character
*return: 1 if c is low or cap otherwise 0
*
*/
int _islower(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'z'; upper++)
		{
			if (lower == 'c' || upper == 'C')
			{
				letter = 1;
			}
		}
	}
	return (letter);
}

#include <stdlio.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero
 *
 * Return: 0 on sucess
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() -RAND_MAX / 2;
	/* your code goeas there */
	if (n < 0)
	{
		printf("%d is %s\n", "negative");
	}
	else if (n >0)
	{
		printf9"%d is %s\n", n, "positive");
	}
	wlsw
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}

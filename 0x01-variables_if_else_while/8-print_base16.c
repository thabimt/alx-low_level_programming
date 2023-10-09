#include <stdio.h>
/**
*main - print base sixteen
*
*Return: (0) success
*
*/
int main(void)
{
char n = '0';
char t = '0';

while (n <= '9')
{
putchar(n);
n++;
}
while (t <= 'f')
{
putchar(t);
t++;
}
putchar('\n');

return (0);
}

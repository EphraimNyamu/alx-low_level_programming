#include <stdio.h>
/**
* main - prints all possible combinations of numbers
* with no two numbers same in pairing
* Return: 0 means success
*/
int main(void)
{
int a, b, c;
for (a = 48; a <= 57; a++)
{
for (b = 49; b <= 57; b++)
{
for (c = 50; c < 58; c++)
{
if(c > b && b > a)
{
putchar(a);
putchar(b);
putchar(c);
if (a != 55 || b != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

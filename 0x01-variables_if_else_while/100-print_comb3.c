#include <stdio.h>
/**
* main - prints all possible combinations of numbers
* with no two numbers same in pairing
* Return: 0 means success
*/
int main(void)
{
int a, b;
for (a = 48; a <= 58; a++)
{
for (b = 49; b <= 58; b++)
{
if (a != b && b > a)
{
putchar(a);
putchar(b);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

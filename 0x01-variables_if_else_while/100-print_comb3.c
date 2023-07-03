#include <stdio.h>
/**
* main - prints all possible combinations of numbers
* with no two numbers same in pairing
* Return: 0 means success
*/
int main(void)
{
int a, b;
for (a = 48; a <= 56; a++)
{
for (b = 49; b <= 57; b++)
{
if (a != 56 && b > 57)
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

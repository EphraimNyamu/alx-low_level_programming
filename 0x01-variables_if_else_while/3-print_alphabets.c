#include <stdio.h>
/**
 * main- prints alphabet
 * Return: 0 when successful
 */
int main(void)
{
char c;
char d;
c = 'a';
d = 'A';
while (c <= 'z')
{
putchar (c);
c++;
}
while (d <= 'z')
{
putchar (d);
d++;
}
putchar("\n");
return (0);
}

#include <stdio.h>
/**
 * main- prints the alphabet
 * Return: value is 0
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}

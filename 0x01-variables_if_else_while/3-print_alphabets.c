#include <stdio.h>
#include <ctype.h>
/**
 * main - prints uppercase alphabets followed by lowcase
 * Return: 0 on successful compilation
 */
int main(void)
{
char var[52] ;
var[52] = getchar();
if (islower(var[52]))
{
putchar(toupper(var[52]));
}
else
{
putchar(tolower(var[52]));
}
putchar('\n');
return (0);
}

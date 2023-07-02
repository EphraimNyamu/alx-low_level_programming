#include <stdio.h>
#include <ctype.h>
/**
 * main - prints uppercase alphabets followed by lowcase
 * Return: 0 on successful compilation
 */
int main(void)
{
char var;
var = getchar();
if (islower(var))
{
putchar(toupper(var));
}
else
{
putchar(tolower(var));
}
putchar('\n');
return (0);
}

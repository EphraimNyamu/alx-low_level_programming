#include <unistd.h>
/**
 * main - C program to print a line with any function to the standard error
 * Return: successful compilation returns 1
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
	return (1);
}

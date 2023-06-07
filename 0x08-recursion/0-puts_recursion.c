#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @y: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *y)
{
	if (*y)
	{
		_putchar(*y);
		_puts_recursion(y + 1);
	}

	else
		_putchar('\n');
}

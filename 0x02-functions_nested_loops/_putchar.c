#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints c to stdout
 * @c: character to be printed
 * Return: 1 on sucess
 * on error: -1 is returned, errno is set appropriately
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
#include <unistd.h>
/**
 *_putchar pirnts c to standard output
 *@c:a character to be outputed
 *Return: 1 on succes
 *on_error -1 is returned, errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"

/**
 * _isupper - uppercase letters
 * @char: to check whether letters are uppercase
 *
 * Return 0 for success and 1 for error appropriately
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

#include "main"
/**
 * prints_alphabet prints 10 times the alphabet in lowercase
 */

int void print_alphabet_x10(void)
{
	char letter;
	int total;
	
	total = 0;

	while (total < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++
		}
		total++
	}
	_putchar('\n')
}

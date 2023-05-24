#include "main.h"

/**
 * _putchar: function that prints the  alphabet in lowercase letters
 * Return: 0 is returned on success
 *
 */ 
void  print_alphabet(void); {
    char letter = 'a';
    
    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }
    
    putchar('\n');
}

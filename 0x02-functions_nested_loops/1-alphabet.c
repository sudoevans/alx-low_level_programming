#include "main.h"

/**
 *print_alphabet-This progrma prints letters of the alphabet in small caps.
 */

void print_alphabet(void)

{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

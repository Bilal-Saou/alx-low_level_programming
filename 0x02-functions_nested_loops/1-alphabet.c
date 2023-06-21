#include "main.h"

/**
 * Description: prints _alphabet - utilizes on the _putchar finction to print
 *                           the alphabet a - z
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

#include "main.h"


/**
* print_alphabet - print all alphabet in lowercase
*
* * Description: This function prints all
*  the lowercase alphabets from 'a' to 'z'.
*/


	void print_alphabet(void)
	{
		char letter;


		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);


		_putchar('\n');
	}

/**
 * print_alphabet - Prints all lowercase alphabets.
 *
 * Description: This function prints all the lowercase alphabets from 'a' to 'z'.
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
        _putchar(letter);

    _putchar('\n');
}

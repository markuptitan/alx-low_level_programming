/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to print.
 *
 *
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}

_putchar('\n');
}

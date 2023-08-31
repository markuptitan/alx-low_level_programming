#include "main.h"
/**
 * _puts_recursion - Entry point for the function
 * @s: Variable used for string
 *
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s); /*Print the current character*/
_puts_recursion(s + 1);
}
}

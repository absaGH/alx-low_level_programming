/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: nothing
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}

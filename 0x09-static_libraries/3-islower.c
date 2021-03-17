/**
 * _islower - a function that checks whether c is lowercase or not
 * @c: character input
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}

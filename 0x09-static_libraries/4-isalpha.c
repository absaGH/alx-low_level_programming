/**
 * _isalpha - a function that checks whether c is alphabet
 * @c: character input
 * Return: 1 if c is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}

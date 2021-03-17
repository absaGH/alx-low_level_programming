/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: the sting to which the function copy to
 * @src: the string from which the function copy
 * Return: pointer to the copied string
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

for (; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}

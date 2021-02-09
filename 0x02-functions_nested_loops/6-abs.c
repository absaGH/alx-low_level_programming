#iclude "holberton.h"
/**
 *_abs - is a function that returns the absolute value of an integer
 *@num: stores an integer value
 *Return: absolute value of @num
 */
int _abs(int num)
{
if (num < 0)
{
return (num * -1);
}
else
{
return (num);
}
}

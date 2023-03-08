#include "main.h"

/**
 * _pow_recursion - the value of x raised to the power will be given
 * @x:the digit we will be powering
 * @y:the power
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
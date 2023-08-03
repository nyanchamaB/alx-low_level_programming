#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate its square root
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find a natural
 * square root of a number
 * @n: a number whose square is calculated
 * @i: iterator
 * Return: the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

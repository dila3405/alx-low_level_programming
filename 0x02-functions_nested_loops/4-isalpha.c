#include "main.h"

/**
 * _isalpha - checks for char alphabet
 * @c: the parameter to be checked
 *
 * Return: 1 if char is letter lower or uppercase, otherwise 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}

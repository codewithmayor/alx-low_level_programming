#include "main.h"

/**
* _isdigit - checks for a digit(0 through 9)
* @c:int
* Return: 1 if digit, 0 if otherwise
*/
int _isdigit(int c)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		if (c == num)
			return (1);

	return (0);
}

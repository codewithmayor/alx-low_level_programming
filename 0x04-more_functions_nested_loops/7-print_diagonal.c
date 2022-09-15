#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n:int
* Returns: 0
*/
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (b != a)
				_putchar(' ');
				else if (b == a)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
	_putchar('\n');
}

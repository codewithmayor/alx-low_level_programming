#include "main.h"

/**
* print_numbers - prints the numbers from 0 to 9
*
* Return: 0
*/
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
}

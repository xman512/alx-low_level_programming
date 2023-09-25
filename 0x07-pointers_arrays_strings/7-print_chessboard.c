#include "main_h"

/**
 * print_chessboard - print a chessboard.
 * @a: source matrix
 *
 *
 * Return: chessboard.
 */
void print_chessboard(char (*a)[8]);
{
	int itr, jtr;

	for (itr = 0; itr < 8; itr++)
	{
		for (jtr = 0; jtr < 8; jtr++)
		{
			_putchar(a[itr][jtr]);
		}
		_putchar('\n');
	}
}


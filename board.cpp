#include "board.h"

void printBoard()
{
	for (int i = (int)Range::MIN_X; i <= (int)Range::MAX_X; i++)
	{
		if (i == (int)Range::MIN_X || i == (int)Range::MAX_X)
		{
			for (int j = 0; j <= (int)Range::MAX_Y + 1; j++)
			{
				gotoxy(i, j);
				cout << '*';
			}
			cout << endl;
		}
		for (int j = 0; j <= (int)Range::MAX_Y + 1; j += (int)Range::MAX_Y + 1)
		{
			cout << '*';
		}
		cout << endl;
	}
}
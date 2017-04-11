// ChessAndRice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>



int main()
{
   int board = 64;
	long long rice = 1;

	for (int i = 1; i < board; i++)
	{
		rice = rice * 2;

		std::cout << rice << std::endl;
	}
	system("pause");
    return 0;
}


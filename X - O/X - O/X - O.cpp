#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;

void Design(string matr[3][3]);

int main()
{
	int column;
	int row;
	int count = 0;
	string matr[3][3];

	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			matr[x][y] = "*";
		}
	}

	Design(matr);


	for (int g = 0; g < 4; g++)
	{
		cout << "The turn of FIRST PLAYER. Please choose the place" << endl;
		cout << "column number: ";
		cin >> column;
		cout << "raw number: ";
		cin >> row;

		while (matr[row][column] != "*")
		{
			cout << "You can't play here! Re enter the numbers" << endl;
			cout << "column number: ";
			cin >> column;
			cout << "raw number: ";
			cin >> row;
		}
		matr[row][column] = "X";
		system("CLS");

		Design(matr);

		if ((matr[0][0] == "X" && matr[0][1] == "X" && matr[0][2] == "X") || (matr[0][0] == "X" && matr[1][0] == "X" && matr[2][0] == "X") || 
			(matr[2][0] == "X" && matr[2][1] == "X" && matr[2][2] == "X") || (matr[1][0] == "X" && matr[1][1] == "X" && matr[1][2] == "X") ||
			(matr[0][1] == "X" && matr[1][1] == "X" && matr[2][1] == "X") || (matr[0][2] == "X" && matr[1][2] == "X" && matr[2][2] == "X") ||
			(matr[0][0] == "X" && matr[1][1] == "X" && matr[2][2] == "X") || (matr[0][2] == "X" && matr[1][1] == "X" && matr[2][0] == "X"))
		{
			cout << "THE FIRST PLAYER WIN!! =)" << endl;
			count = 1;
		}

		if (count == 1)
			break;

		cout << "The turn of SECOND PLAYER. Please choose the place" << endl;
		cout << "column number: ";
		cin >> column;
		cout << "raw number: ";
		cin >> row;

		while (matr[row][column] != "*")
		{
			cout << "You can't play here! Re enter the numbers" << endl;
			cout << "column number: ";
			cin >> column;
			cout << "raw number: ";
			cin >> row;
		}
		matr[row][column] = "O";
		system("CLS");

		Design(matr);

		if ((matr[0][0] == "O" && matr[0][1] == "O" && matr[0][2] == "O") || (matr[0][0] == "O" && matr[1][0] == "O" && matr[2][0] == "O") ||
			(matr[2][0] == "O" && matr[2][1] == "O" && matr[2][2] == "O") || (matr[1][0] == "O" && matr[1][1] == "O" && matr[1][2] == "O") ||
			(matr[0][1] == "O" && matr[1][1] == "O" && matr[2][1] == "O") || (matr[0][2] == "O" && matr[1][2] == "O" && matr[2][2] == "O") ||
			(matr[0][0] == "O" && matr[1][1] == "O" && matr[2][2] == "O") || (matr[0][2] == "O" && matr[1][1] == "O" && matr[2][0] == "O"))
		{
			cout << "THE SECOND PLAYER WIN!!  =)" << endl;
			count = 1;
		}

		if (count == 1)
			break;
	}

	if (count != 1)
	{
		cout << "The turn of FIRST PLAYER. Please choose the place" << endl;
		cout << "column number: ";
		cin >> column;
		cout << "raw number: ";
		cin >> row;

		while (matr[row][column] != "*")
		{
			cout << "You can't play here! Re enter the numbers" << endl;
			cout << "column number: ";
			cin >> column;
			cout << "raw number: ";
			cin >> row;
		}
		matr[row][column] = "X";
		system("CLS");

		Design(matr);

		if ((matr[0][0] == "X" && matr[0][1] == "X" && matr[0][2] == "X") || (matr[0][0] == "X" && matr[1][0] == "X" && matr[2][0] == "X") ||
			(matr[2][0] == "X" && matr[2][1] == "X" && matr[2][2] == "X") || (matr[1][0] == "X" && matr[1][1] == "X" && matr[1][2] == "X") ||
			(matr[0][1] == "X" && matr[1][1] == "X" && matr[2][1] == "X") || (matr[0][2] == "X" && matr[1][2] == "X" && matr[2][2] == "X") ||
			(matr[0][0] == "X" && matr[1][1] == "X" && matr[2][2] == "X") || (matr[0][2] == "X" && matr[1][1] == "X" && matr[2][0] == "X"))
		{
			cout << "THE FIRST PLAYER WIN!!  =)" << endl;
		}

		else
			cout << "Draw !!";

		return 0;
	}
}


void Design(string matr[3][3]) {

	cout << "   0 |" << " 1 " << "| 2" << endl;
	cout << " -------------" << endl;
	cout << "0" << "| " << matr[0][0] << " | " << matr[0][1] << " | " << matr[0][2] << " |" << endl;
	cout << " -------------" << endl;
	cout << "1" << "| " << matr[1][0] << " | " << matr[1][1] << " | " << matr[1][2] << " |" << endl;
	cout << " -------------" << endl;
	cout << "2" << "| " << matr[2][0] << " | " << matr[2][1] << " | " << matr[2][2] << " |" << endl;
	cout << " -------------" << endl;
}

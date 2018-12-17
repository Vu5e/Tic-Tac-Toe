#include <iostream>
using namespace std;
bool againExit = false;
bool justExit = false;
bool replayAgain = false;
char numbers[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
string playAgain;

int n;
void Draw()
{
	system("cls");
	system("cls");
	cout << "Tic Tac Toe v1.0" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << numbers[i][j] << " ";
		}
		cout << endl;
	}
}
void Input()
{
	int a;
	cout << "It's " << player << " turn. " <<"Press the number of the field: ";
	cin >> a;

	if (a == 1)
	{
		if (numbers[0][0] == '1')
			numbers[0][0] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 2)
	{
		if (numbers[0][1] == '2')
			numbers[0][1] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 3)
	{
		if (numbers[0][2] == '3')
			numbers[0][2] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 4)
	{
		if (numbers[1][0] == '4')
			numbers[1][0] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 5)
	{
		if (numbers[1][1] == '5')
			numbers[1][1] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 6)
	{
		if (numbers[1][2] == '6')
			numbers[1][2] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 7)
	{
		if (numbers[2][0] == '7')
			numbers[2][0] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 8)
	{
		if (numbers[2][1] == '8')
			numbers[2][1] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	else if (a == 9)
	{
		if (numbers[2][2] == '9')
			numbers[2][2] = player;
		else
		{
			cout << "Field is already in use try again!" << endl;
			Input();
		}
	}
	
	system("cls");
}
void TogglePlayer()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
char Win()
{
	//first player
	if (numbers[0][0] == 'X' && numbers[0][1] == 'X' && numbers[0][2] == 'X')
		return 'X';
	if (numbers[1][0] == 'X' && numbers[1][1] == 'X' && numbers[1][2] == 'X')
		return 'X';
	if (numbers[2][0] == 'X' && numbers[2][1] == 'X' && numbers[2][2] == 'X')
		return 'X';

	if (numbers[0][0] == 'X' && numbers[1][0] == 'X' && numbers[2][0] == 'X')
		return 'X';
	if (numbers[0][1] == 'X' && numbers[1][1] == 'X' && numbers[2][1] == 'X')
		return 'X';
	if (numbers[0][2] == 'X' && numbers[1][2] == 'X' && numbers[2][2] == 'X')
		return 'X';

	if (numbers[0][0] == 'X' && numbers[1][1] == 'X' && numbers[2][2] == 'X')
		return 'X';
	if (numbers[2][0] == 'X' && numbers[1][1] == 'X' && numbers[0][2] == 'X')
		return 'X';

	//second player
	if (numbers[0][0] == 'O' && numbers[0][1] == 'O' && numbers[0][2] == 'O')
		return 'O';
	if (numbers[1][0] == 'O' && numbers[1][1] == 'O' && numbers[1][2] == 'O')
		return 'O';
	if (numbers[2][0] == 'O' && numbers[2][1] == 'O' && numbers[2][2] == 'O')
		return 'O';

	if (numbers[0][0] == 'O' && numbers[1][0] == 'O' && numbers[2][0] == 'O')
		return 'O';
	if (numbers[0][1] == 'O' && numbers[1][1] == 'O' && numbers[2][1] == 'O')
		return 'O';
	if (numbers[0][2] == 'O' && numbers[1][2] == 'O' && numbers[2][2] == 'O')
		return 'O';

	if (numbers[0][0] == 'O' && numbers[1][1] == 'O' && numbers[2][2] == 'O')
		return 'O';
	if (numbers[2][0] == 'O' && numbers[1][1] == 'O' && numbers[0][2] == 'O')
		return 'O';

	return '/';
}
int main()
{
	n = 0;
	do
	{
		do
		{
			n++;
			Draw();
			Input();
			if (Win() == 'X')
			{
				cout << "X wins!" << endl;
				break;
			}
			else if (Win() == 'O')
			{
				cout << "O wins!" << endl;
				break;
			}
			else if (Win() == '/' && n == 9)
			{
				cout << "It's a draw!" << endl;
				break;
			}
			TogglePlayer();
		}while(!justExit);

		do
		{
			cout << "Would you like to play again? (Y/N)" << endl;
			cout << endl;
			cout << "Your Choice: ";
			cin >> playAgain;
			cout << endl;
			
			if(playAgain == "y" || playAgain == "Y")
			{
				system("cls");
				againExit = true;
				replayAgain = true;
			}
			
			else if(playAgain == "n" || playAgain == "N")
			{
				system("cls");
				againExit = true;
				replayAgain = false;
				break;
			}
			
			else
			{
				cout << "That choice was invalid. Please choose again" << endl;
				cout << endl;
				againExit = false;
				replayAgain = false;
			}
		}while(!againExit);	
		againExit = false;	
	}while(replayAgain == true);
	
	
	system("pause");
	return 0;
}

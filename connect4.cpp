#include <iostream>
using namespace std;

char board[5][5] = {{'0', '0', '0', '0'},
                    {'0', '0', '0', '0'},
                    {'0', '0', '0', '0'},
                    {'0', '0', '0', '0'},
                    {'0', '0', '0', '0'}};


int row, column;
char turn = 'X';
bool draw = false;

void display_board();
void player_turn();
bool win_check();

int main()
{

    while(win_check())
    {
        display_board();
        player_turn();
        win_check();
    }

    if(turn == 'X' && draw == false)
    {
        cout << "Player 2 Won!\n";
    }
    if(turn == 'O' && draw == false)
    {
        cout << "Player 1 Won!!\n";
    }
    else
    {
        cout << "Its a Draw!!\n";
    }
    system("pause");
    return 0;
}

void display_board()
{
    system("cls");
    cout << "|" << board[0][0] << board[0][1] << board[0][2] << board[0][3] << "|" << "\n";
    cout << "|" << board[1][0] << board[1][1] << board[1][2] << board[1][3] << "|" << "\n";
    cout << "|" << board[2][0] << board[2][1] << board[2][2] << board[2][3] << "|" << "\n";
    cout << "|" << board[3][0] << board[3][1] << board[3][2] << board[3][3] << "|" << "\n";
}

void player_turn()
{
    int choice;
    if(turn == 'X')
    {
        cout << "Player 1s turn [X]\n";
    }
    else if (turn == 'O')
    {
        cout << "Player 2s turn [O]\n";
    }
    cout << "Enter Row and Column Number without spaces. (Counting starts from 0)\n";
    cin >> choice;

    switch(choice)
    {
        case 00: row = 0; column = 0; break;
        case 01: row = 0; column = 1; break;
        case 02: row = 0; column = 2; break;
        case 03: row = 0; column = 3; break;
        case 10: row = 1; column = 0; break;
        case 11: row = 1; column = 1; break;
        case 12: row = 1; column = 2; break;
        case 13: row = 1; column = 3; break;
        case 20: row = 2; column = 0; break;
        case 21: row = 2; column = 1; break;
        case 22: row = 2; column = 2; break;
        case 23: row = 2; column = 3; break;  
        case 30: row = 3; column = 0; break;
        case 31: row = 3; column = 1; break;
        case 32: row = 3; column = 2; break;
        case 33: row = 3; column = 3; break;
        default:
        cout << "Invalid input\n";
        break;
    }

    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = 'X';
        turn = 'O';
    }
    else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = 'O';
        turn = 'X';
    }
    else
    {
        cout << "Index filled already try again\n";
        player_turn();
    }
}

bool win_check()
{
        // Checking player 1s winning
        if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X' && board[0][3] == 'X')
        {
            return false;
        }
        else if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X' && board[1][3] == 'X')
        {
            return false;
        }
        else if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X' && board[2][3] == 'X')
        {
            return false;
        }
        else if(board[3][0] == 'X' && board[3][1] == 'X' && board[3][2] == 'X' && board[3][3] == 'X')
        {
            return false;
        }
        else if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' && board[3][3] == 'X')
        {
            return false;
        }
        else if(board[0][3] == 'X' && board[1][2] == 'X' && board[2][1] == 'X' && board[3][0] == 'X')
        {
            return false;
        }
        else if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X' && board[3][0] == 'X')
        {
            return false;
        }
        else if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X' && board[3][1] == 'X')
        {
            return false;
        }
        else if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X' && board[3][2] == 'X')
        {
            return false;
        }
        else if(board[0][3] == 'X' && board[1][3] == 'X' && board[2][3] == 'X' && board[3][3] == 'X')
        {
            return false;
        }

        // checking player 2s winning
        if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O' && board[0][3] == 'O')
        {
            return false;
        }
        else if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O' && board[1][3] == 'O')
        {
            return false;
        }
        else if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O' && board[2][3] == 'O')
        {
            return false;
        }
        else if(board[3][0] == 'O' && board[3][1] == 'O' && board[3][2] == 'O' && board[3][3] == 'O')
        {
            return false;
        }
        else if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' && board[3][3] == 'O')
        {
            return false;
        }
        else if(board[0][3] == 'O' && board[1][2] == 'O' && board[2][1] == 'O' && board[3][0] == 'O')
        {
            return false;
        }
        else if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O' && board[3][0] == 'O')
        {
            return false;
        }
        else if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O' && board[3][1] == 'O')
        {
            return false;
        }
        else if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O' && board[3][2] == 'O')
        {
            return false;
        }
        else if(board[0][3] == 'O' && board[1][3] == 'O' && board[2][3] == 'O' && board[3][3] == 'O')
        {
            return false;
        }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] != 'X' && board[i][j] != 'O')
            {
                return true;
            }
        }
    }

    draw = true;
    return false;
}



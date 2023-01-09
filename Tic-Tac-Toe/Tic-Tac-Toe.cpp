#include <iostream>
#include <stdlib.h>
using namespace std;

struct positionMap
{
    int row;
    int col;
} map;

int position;
char player1 = 'O';
char player2 = 'X';
char board[3][3] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

void printBoard()
{
    cout << "       |       |\n    "
         << board[0][0] << "  |   " << board[0][1] << "   |  " << board[0][2] << "\n"
         << "       |       |\n";
    cout << " ---------------------\n";
    cout << "       |       |\n    "
         << board[1][0] << "  |   " << board[1][1] << "   |  " << board[1][2] << "\n"
         << "       |       |\n";
    cout << " ---------------------\n";
    cout << "       |       |\n    "
         << board[2][0] << "  |   " << board[2][1] << "   |  " << board[2][2] << "\n"
         << "       |       |\n\n";
}

bool spaceIsFree(positionMap map)
{
    if (board[map.row][map.col] == ' ')
        return true;
    else
        return false;
}

bool checkDraw()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

bool checkForWin()
{
    if ((board[0][0] == board[0][1]) && (board[0][0] == board[0][2]) && board[0][0] != ' ')
    {
        return true;
    }
    else if ((board[1][0] == board[1][1]) && (board[1][0] == board[1][2]) && board[1][0] != ' ')
    {
        return true;
    }
    else if ((board[2][0] == board[2][1]) && (board[2][0] == board[2][2]) && board[2][0] != ' ')
    {
        return true;
    }
    else if ((board[0][0] == board[1][0]) && (board[0][0] == board[2][0]) && board[0][0] != ' ')
    {
        return true;
    }
    else if ((board[0][1] == board[1][1]) && (board[0][1] == board[2][1]) && board[0][1] != ' ')
    {
        return true;
    }
    else if ((board[0][2] == board[1][2]) && (board[0][2] == board[2][2]) && board[0][2] != ' ')
    {
        return true;
    }
    else if ((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]) && board[0][0] != ' ')
    {
        return true;
    }
    else if ((board[2][0] == board[1][1]) && (board[2][0] == board[0][2]) && board[2][0] != ' ')
    {
        return true;
    }

    return false;
}

/*positionMap positionFinder(int position){
    int i,j;
         if (position == 1){i = 0;j = 0;}
    else if (position == 2){i = 0;j = 1;}
    else if (position == 3){i = 0;j = 2;}
    else if (position == 4){i = 1;j = 0;}
    else if (position == 5){i = 1;j = 1;}
    else if (position == 6){i = 1;j = 2;}
    else if (position == 7){i = 2;j = 0;}
    else if (position == 8){i = 2;j = 1;}
    else if (position == 9){i = 2;j = 2;}
    else cout<<"Enter a valid Position !";
    map.row=i;
    map.col=j;
    return map;
}*/

void insertLetter(char letter, int position)
{

    int i, j;
    if (position == 1)
    {
        i = 0;
        j = 0;
        map.row = i;
        map.col = j;
    }
    else if (position == 2)
    {
        i = 0;
        j = 1;
        map.row = i;
        map.col = j;
    }
    else if (position == 3)
    {
        i = 0;
        j = 2;
        map.row = i;
        map.col = j;
    }
    else if (position == 4)
    {
        i = 1;
        j = 0;
        map.row = i;
        map.col = j;
    }
    else if (position == 5)
    {
        i = 1;
        j = 1;
        map.row = i;
        map.col = j;
    }
    else if (position == 6)
    {
        i = 1;
        j = 2;
        map.row = i;
        map.col = j;
    }
    else if (position == 7)
    {
        i = 2;
        j = 0;
        map.row = i;
        map.col = j;
    }
    else if (position == 8)
    {
        i = 2;
        j = 1;
        map.row = i;
        map.col = j;
    }
    else if (position == 9)
    {
        i = 2;
        j = 2;
        map.row = i;
        map.col = j;
    }
    else
        cout << "Enter a valid Position !";

    if (spaceIsFree(map) == 1)
    {
        board[map.row][map.col] = letter;
        printBoard();
        if (checkForWin())
        {
            if (letter == 'X')
            {
                cout << "Player 2 Wins !";
                exit(0);
            }
            else
            {
                cout << "Player 1 Wins !";
                exit(0);
            }
        }
        if (checkDraw())
        {
            cout << "Draw !";
            exit(0);
        }
    }
    else
    {
        cout << "Can't insert there !\n";
        cout << "Enter new position : ";
        cin >> position;
        insertLetter(letter, position);
    }
}

void player1Move()
{
    cout << "\nEnter position for player 1 : \n";
    cin >> position;
    insertLetter(player1, position);
}

void player2Move()
{
    cout << "\nEnter position for player 2 : \n";
    cin >> position;
    insertLetter(player2, position);
}

void minimax()
{
}

int main()
{
    while (!checkForWin())
    {
        player1Move();
        player2Move();
    }
    return 0;
}
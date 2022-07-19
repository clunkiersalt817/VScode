#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int s = matrix.size();
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s / 2; j++)
        {
            swap(matrix[i][j], matrix[i][s - 1 - j]);
        }
    }
}
int main()
{
    vector<vector<int>> vect;
    vect = {{1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};

    rotate(vect);

    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }

    rotate(vect);
}
#include <iostream>
using namespace std;
int main()
{
    int m1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int m2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int m3[3][3];
    int sum;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m3[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                m3[i][j] = m3[i][j] + m1[i][k] * m2[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << m3[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}
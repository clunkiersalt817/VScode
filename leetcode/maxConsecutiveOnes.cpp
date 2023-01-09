#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i, result = 0, count = 0;
    vector<int> vec = {1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1};
    int n = vec.size();
    for (i = 0; i < n; i++)
    {
        if (vec[i] == 0)
        {
            count = 0;
        }
        else
        {
            count++;
        }

        result = max(result, count);
    }
    cout << result;
    return 0;
}
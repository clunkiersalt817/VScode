#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string str;
    fstream inputoutputfileStream;
    inputoutputfileStream.open("file.txt", ios::app);
    inputoutputfileStream << "This is the first file i created using append mode...";
    inputoutputfileStream.close();
    inputoutputfileStream.open("file.txt", ios::in);
    getline(inputoutputfileStream, str);
    cout << str;
    return 0;
}
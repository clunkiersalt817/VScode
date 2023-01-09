#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>

// #include<iostream>
// #include<fstream>
// #include<stdlib.h>
// using namespace std;

void checkString()
{
    char c;
    fstream fs;
    fs.open("abn.txt", ios::in | ios::out);
    c = fs.get();
    if(c == '$'){
        goto sa;
    }

    sa:
    {
        c = fs.get();
        if(c == 'a') {
            fs.seekg(-1, ios::cur);
            fs.put('X');
            goto sb;
        }

        if(c == 'Y'){
            fs.seekg(1);
            goto s2;
        }
    }

    sb: 
    {
        c = fs.get();
        if(c == 'a') goto sb;
        if(c == 'b') {
            fs.seekg(-1, ios::cur);
            fs.put('Y');
            goto s1;
        }

        if(c == 'Y'){
            goto sb;
        }
    }
    s1: 
    {
        c = fs.get();
        if(c == 'b'){
            fs.seekg(-2, ios::cur);
            goto s1;
        }
        if(c == 'Y'){
            fs.seekg(-2, ios::cur);
            goto s1;
        }
        if(c == 'a'){
            fs.seekg(-2, ios::cur);
            goto s1;
        }
        if(c == 'X'){
            goto sa;
        }
        if(c == '$'){
            fs.seekg(1);
            goto s2;
        }
    }
    
    s2:
    { 
        c = fs.get();
        
        if(c == 'X') goto s2;
        if(c == 'Y') goto s2;
        if(c == '$') {
            cout<<endl<<"Valid String.";
            getch();
            fs.close();
            exit(0);
        }
        else{
        cout<<endl<<"Invalid String..";
        getch();
        fs.close();
        exit(0);
        }
    }

    fs.close();
}   

int main()
{
    clrscr();
    char str[100], c;
    int i=0;
    cout<<endl<<"Enter string(add '$' sign before and after the string) : ";
    cin>>str;

    if(str[0] != '$') cout<<endl<<"Add '$' in starting.";
    for(i=1; str[i] != '\0'; i++){}
    if(str[i-1] != '$') cout<<endl<<"Add '$' in end.";

    ofstream ofs("abn.txt");
    ofs<<str;
    ofs.close();

    checkString();

    getch();
    return 0;
}
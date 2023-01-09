// a^nb^n n > 0

// #include<iostream>
// #include<stack>
// #include<fstream>
// using namespace std;

#include<iostream.h>
#include<stack.h>
#include<conio.h>
#include<fstream.h>

void checkString()
{

    stack<char> st;
    st.push('$');

    char c;
    ifstream ifs("abn.txt");
    c = ifs.get();
    if(c == '$')  goto s1;

    s1:{
        c = ifs.get();
        if(c == 'a'){
            st.push(c);
            goto s1;
        }

        if(c == 'b'){
            ifs.seekg(-1, ios::cur);
            goto s2;
        }

            if(c == st.top()){
            cout<<endl<<"Valid string"<<endl;
            getch();
            exit(0);
        }
    }

    s2:{
        c = ifs.get();
        if(c == 'b' && st.top() == 'a'){
            st.pop();
            goto s2;
        }

        if(c == st.top()){
            cout<<endl<<"Valid string"<<endl;
            getch();
            exit(0);
        }

        cout<<endl<<"InValid string"<<endl;
        getch();
        exit(0);
    }
}

int main()
{
    clrscr();
    char str[100], c;
    int i=0;
    cout<<endl<<"Enter string(add '$' sign before and after the string) : ";
    cin>>str;

    if(str[0] != '$') {
        cout<<endl<<"Add '$' in starting.";
        getch();
        exit(0);
    }
    for(i=1; str[i] != '\0'; i++){}
    if(str[i-1] != '$'){
        cout<<endl<<"Add '$' in end.";
        getch();
        exit(0);

    }

    ofstream ofs("abn.txt");
    ofs<<str;
    ofs.close();

    checkString();

    getch();
    return 0;
}
//atleat one 'b'

#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <graphics.h>
#include<stdlib.h>

void createAutomata()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI\\");

    //1st circle
    setcolor(RED);
    circle(200, 200, 20);
    outtextxy(190, 195, "S0");

    //2nd circle
    setcolor(RED);
    circle(300, 200, 20);
    outtextxy(293, 194, "S1");

    //inner circle
    circle(300, 200, 15);

    line(130, 200, 180, 200);
    //arrow line
    line(170, 190, 180, 200);  //top
    line(170, 210, 180, 200);  //bottom

    //2nd line
    line(220, 200, 280, 200);
    outtextxy(245, 190, "b");
    //arrow line
    line(270, 190, 280, 200);    //top
    line(270, 210, 280, 200);

    //s1 loop
    ellipse(300, 180, 350, 192, 16, 30);
    //arrow
    line(308, 170, 316, 180);
    line(316, 180, 322, 170);
    outtextxy(290, 142, "a,b");

    //S0 loop
    ellipse(200, 180, 350, 192, 16, 30);
    outtextxy(199, 141, "a");
    //arrow
    line(208, 170, 216, 180);
    line(216, 180, 222, 168);

    getch();
    closegraph();
}

void main()
{
    clrscr();
    char str[100], c;

    cout << endl<< "Enter string : ";
    cin >> str;

    ofstream ofs("C:\\TC\\BIN\\PROGRAMS\\atleast-one-b.txt");
    ofs << str;
    ofs.close();

    ifstream ifs("C:\\TC\\BIN\\PROGRAMS\\atleast-one-b.txt");
    c = ifs.get();
    if (c == 'b')  goto s1;
    if(c == 'a') goto s2;
    cout << endl<< "Invalid string...";
    getch();
    exit(0);

s1:
    c = ifs.get();
    if (c == 'b')  goto s1;
    if (c == 'a')  goto s3;
    if(ifs.eof())  cout << endl<< "Valid string."<<endl<<"Creating automata....";
    getch();
    createAutomata();
    exit(0);

    cout << endl<< "Invalid string...";
    getch();
    exit(0);

s3: 
    c = ifs.get();
    if (c == 'b')  goto s3;
    if (c == 'a')  goto s3;
    if(ifs.eof())  cout << endl<< "Valid string."<<endl<<"Creating automata....";
    getch();
    createAutomata();
    exit(0);

s2: 
    c = ifs.get();
    if(c == 'a')  goto s2;
    if(c == 'b')  goto s1;

    cout << endl<< "Invalid string...";
    getch();
    exit(0);
}
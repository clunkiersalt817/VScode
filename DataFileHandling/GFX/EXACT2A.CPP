//exact 2 a

#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <graphics.h>
#include<stdlib.h>


void automata()
{
  int gd = DETECT, gm;
 initgraph(&gd, &gm, "C:\\TC\\BGI\\");
 setbkcolor(WHITE);

 //1st circle
 setcolor(RED);
 circle(200, 200, 20);
 outtextxy(190, 195, "S0");

 //2nd circle
 setcolor(RED);
 circle(300, 200, 20);
 outtextxy(293, 194, "S1");

  //3rd circle
 setcolor(RED);
 circle(400, 200, 20);
 outtextxy(393, 194, "S2");
 //inside circle
 setcolor(RED);
 circle(400, 200, 15);

  //1st line
 line(130, 200, 180, 200);
 //arrow line
 line(170, 190, 180, 200);  //top
 line(170, 210, 180, 200);  //bottom

 //2nd line
 line(220, 200, 280, 200);
 outtextxy(245, 190, "a");
 //arrow line
 line(270, 190, 280, 200);    //top
 line(270, 210, 280, 200);    //bottom

 //3rd line
 line(320, 200, 380, 200);
 outtextxy(350, 190, "a");
 //arrow line
 line(370, 190, 380, 200);  //top
 line(370, 210, 380, 200);  //bottom

  //1st loop
 ellipse(200, 170, 327, 219, 20, 30);
 outtextxy(200, 130, "b");
 //arrow
 line(212, 160, 220, 170);    //left
 line(220, 171, 225, 156);    //right

 ellipse(300, 170, 327, 219, 20, 30);
 outtextxy(300, 131, "b");
 line(310, 160, 320, 170);
 line(320, 170, 330, 158);

 ellipse(400, 170, 327, 219, 20, 30);
 outtextxy(400, 131, "b");
 line(410, 160, 420, 170);
 line(420, 170, 430, 158);


 getch();
 closegraph();
}


void main()
{
    clrscr();
    char str[100], c;
    char word[100];
    int cnt=0, i=0;

    cout << endl<< "Enter string : ";
    cin >> str;

    ofstream ofs("C:\\TC\\BIN\\PROGRAMS\\new.txt");
    ofs << str;
    ofs.close();

    ifstream ifs("C:\\TC\\BIN\\PROGRAMS\\new.txt");
    ifs>>word;

    for(i=0; word[i]!='\0'; i++)
    {
	if(word[i]=='a' || word[i]=='b')
        {
            if(word[i] == 'a')
	    cnt++;

            if(cnt > 2)
            break;
        }
        else{
	    cout<<endl<<"Invalid";
	    cout<<endl<<cnt;
            getch();
            exit(0);
        }
    }

    if(cnt == 2)
    {
        cout<<endl<<"valid";
        automata();
        getch();
        exit(0);
    }
    else{
	cout<<endl<<"Invalid";
        getch();
        exit(0);  
    }
}
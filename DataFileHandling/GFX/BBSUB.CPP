//substring 'bb'

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<graphics.h>
#include<stdlib.h>

void createAutomata()
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
 outtextxy(245, 190, "b");
 //arrow line
 line(270, 190, 280, 200);    //top
 line(270, 210, 280, 200);    //bottom

 //3rd line
 line(320, 200, 380, 200);
 outtextxy(350, 190, "b");
 //arrow line
 line(370, 190, 380, 200);  //top
 line(370, 210, 380, 200);  //bottom

 //1st loop
 ellipse(200, 170, 327, 219, 20, 30);
 outtextxy(200, 130, "a");
 //arrow
 line(212, 160, 220, 170);    //left
 line(220, 171, 225, 156);    //right

 //2nd loop
 ellipse(400, 170, 327, 219, 20, 30);
 outtextxy(390, 130, "a,b");
 //arrow
 line(412, 160, 420, 170);
 line(420, 170, 425, 158);

 //join from s1 to s0
 ellipse(250, 214, 190, 350, 50, 40);
 outtextxy(250, 267, "a");
 //arrow
 line(250, 254, 260, 244);    //top
 line(248, 254, 261, 262);    //bottom


 getch();
 closegraph();
}


void main()
{
 clrscr();
 char str[100], c;

 cout<<endl<<"Enter string : ";
 cin>>str;

 ofstream ofs("C:\\TC\\BIN\\PROGRAMS\\substringAA.txt");
 ofs<<str;
 ofs.close();

 ifstream ifs("C:\\TC\\BIN\\PROGRAMS\\substringAA.txt");
 c = ifs.get();
 if(c=='b')
   goto s1;
 if(c=='a')
   goto s2;
 cout<<endl<<"Invalid String...";
 getch();
 exit(0);

 s1: c=ifs.get();
 if(c=='b')  goto s3;
 if(c=='a') goto s2;
 cout<<endl<<"Invalid string..";
 getch();
 exit(0);

 s2: c=ifs.get();
 if(c=='a') goto s2;
 if(c=='b') goto s1;
 cout<<endl<<"Invallid string..";
 getch();
 exit(0);

 s3: c=ifs.get();
 if(c=='b') goto s3;
 if(c=='a') goto s3;
 if(ifs.eof()) cout<<endl<<"Valid string.."<<endl<<"Creating Automata...";
 getch();
 createAutomata();
 getch();
 exit(0);

 ifs.close();
}
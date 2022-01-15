/*...C.O.N.S.T.R.U.C.T.O.R...........
1.Special member method                
2.invoked during object initialization 
3.useful for initialization            
4.same name as the class               
5.no return type is specified          
6.can be overloaded                    
.....D.E.S.T.R.U.C.T.O.R.............
1.special member method
2.same name as the class proceeded with a tilde(~)
3.automatically invoked when object i destroyed
4.no return type and no parameters
5.only one destructor for one object
6.useful to release memory and other resources
...................................*/

#include <iostream>
#include <string>

using namespace std;

class player
{
public:
    string name;
    int health;
    int xp;

public:
    void set_name(string name_val)
    {
        name = name_val;
    }
    player()
    {
        cout << "no args contructor called" << endl;
    }
    player(string name)
    {
        cout << "string args contructor called" << endl;
    }

    player(string name, int health, int xp)
    {
        string n = name;
        cout << "three args contructor called for " << n << endl;
    }
    ~player()
    {
        cout<<"destructor called for "<<name<<endl;
    }
};

int main()
{
    player slayer;
    slayer.set_name("kshitiz");
    player frank("Hero", 100, 100);
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class player
{
private:
    string name;
    int health;
    int xp;

public:
    void set_name(string name_val)
    {
        name = name_val;
    }
    string get_name()
    {
        return name;
    }
    player(){
        name="None";
        health=100;
        xp=504;
    }
    player(string name_val,int health_val,int xp_val){
        name=name_val;
        health=health_val;
        xp=xp_val;
    }
};

int main()
{
    player frank,villain{"Demon",100,234};
    frank.set_name("Kshitiz");
    cout<<frank.get_name()<<endl;
    cout<<villain.get_name()<<endl;
    return 0;
}
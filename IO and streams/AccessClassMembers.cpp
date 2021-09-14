#include <iostream>
#include <string>
using namespace std;
class player
{
private:
    string name="Player";
    int health;
    int xp;
    public:
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    };
    bool is_dead();
};
/*class account
{
    string name;
    double balance;
    bool deposit(double bal);
    bool withdraw(double bal);
};*/
int main()
{
    player frank;
    frank.talk("Hi there !!");
    player *enemy = new player;
    enemy->talk("I will destroy you *(~|~)*");
    return 0;
}
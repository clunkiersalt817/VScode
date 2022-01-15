#include <iostream>
using namespace std;

class person
{
    int age;
    string name;

public:
    person();
    person(int, string);
    friend void show(person);
};
person::person()
{
    cout << "No args constructor called";
}

person::person(int a, string s = "NoName")
{
    age = a;
    name = s;
}

void show(person p){
    cout<<p.age<<endl<<p.name<<endl;
}

int main()
{
    person p1 = person(), p2 = person(18), p3 = person(20, "Kshitiz");
    show(p1);
    show(p2);
    show(p3);
    return 0;
}
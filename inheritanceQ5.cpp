//Q5
#include <iostream>
using namespace std;
class Animal{
    public:
void eat(){
    cout<<"eat"<<endl;
}
};
class Dog:public Animal{
    public:
void bark(){
    cout<<"bark"<<endl;
}
};
class Puppy:public Dog{
    public:
void weep(){
    cout<<"weep"<<endl;
}
};
int main(){
    Animal a1;
    Dog d1;
    Puppy p1;
    cout<<"animal:"<<endl;
    a1.eat();
    cout<<"dog:"<<endl;
    d1.bark();
    d1.eat();
    cout<<"puppy:"<<endl;
    p1.bark();
    p1.eat();
    p1.weep();
}

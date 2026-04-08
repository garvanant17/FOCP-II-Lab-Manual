//Q1
#include <iostream>
using namespace std;
class Person{
    public:
string name;
int age;
Person(){
    name = "xyz";
    age = 0;
}
Person(string name, int age){
    this -> name = name;
    this-> age = age;
}
void displayPerson(){
    cout<<"\nname: "<<name<<"\n age: "<<age;
}

};

class Student:public Person{
public:
string rollno;
Student(){
    rollno = "25CSU000";
}
Student(string name, int age, string rollno):Person(name,age){
    this-> rollno = rollno;
}
void displayStudent(){
    displayPerson();
    cout<<"\nroll number: "<<rollno;
}
};

int main(){
    Student s1, s2("Garv", 18, "25CSU072");
    s1.displayPerson();
    s2.displayStudent();
}

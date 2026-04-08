//Q7
#include <iostream>
using namespace std;
class Shape{
    public:
void draw(){
    cout<<"draw"<<endl;
}
};
class Circle:public Shape{
    public:
void area(){
    cout<<"area of circle"<<endl;
}
};
class Rectangle : public Shape{
    public:
    void area(){
        cout<<"area of rectangle"<<endl;
    }
};

int main(){
    Circle c1;
    Rectangle r1;
    cout<<"circle: "<<endl;
    c1.draw();
    c1.area();
    cout<<"rectangle: "<<endl;
    r1.draw();
    r1.area();
}

//Q6
#include <iostream>
using namespace std;
class Device{
    public:
void powerOn(){
    cout<<"power on"<<endl;
}
};
class Computer:public Device{
    public:
void process(){
    cout<<"process"<<endl;
}
};

class Laptop: public Computer{
    public:
void carry(){
    cout<<"carry"<<endl;
}
};

int main(){
    Laptop l1;
    cout<<"laptop:"<<endl;
    l1.carry();
    l1.powerOn();
    l1.process();
}

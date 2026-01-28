#include <iostream>
using namespace std;
int main(){
    int id;
    cout<<"enter your ID: ";
    cin>>id;
    if(id%3==0 && id%5==0)
    cout<<"Buzz and Fuzz";
    else if(id%3==0)
    cout<<"Buzz";
    else if(id%5==0)
    cout<<"Fuzz";
    else
    cout<<"invalid";
}

//QUESTION 5

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter value of a and b: ";
    cin>>a>>b;
    c = a;
    a = b;
    b = c;
    cout<<"after swapping, the values of a and b are "<<a<<","<<b;
}

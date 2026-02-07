#include <iostream>
using namespace std;
int main(){
    float amount, total;
    int qty;
    cout<<"enter quantity and amount: ";
    cin>>qty>>amount;
    if(qty>1000)
    total = amount*0.9;
    else total = amount;
    cout<<"your total is "<<total;
    
}

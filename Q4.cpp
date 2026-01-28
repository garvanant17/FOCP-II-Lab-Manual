//QUESTION 4

#include <iostream>
using namespace std;
int main(){
    float total, bill, itemno, quant, price;
    cout<<"enter the item number, quanitity and unit price: ";
    cin>>itemno>>quant>>price;
    total = quant*price;
    bill = total - total*0.2;
    cout<<"your total bill after dicount is "<<bill;
}

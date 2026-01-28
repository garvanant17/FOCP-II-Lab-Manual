//QUESTION 3

#include <iostream>
using namespace std;
int main(){
    float temp, F, C;
    char selection;
    cout<<"To what reading do you want to convert to Fahrenheit(F) or Celsius(C): ";
    cin>>selection;
    if(selection == 'F' || selection == 'f'){
        cout<<"enter temp in C: ";
        cin>>temp;
        F = (temp*(1.8)) + 32;
        cout<<"temperature in F is "<<F ;
    }
    else if (selection == 'C' || selection == 'c'){
        cout<<"enter temp in F: ";
        cin>>temp;
        C = (temp - 32) * 5.0/9;
        cout<<"temp in C is: "<<C;
    }
    else
    cout<<"invalid response";
}

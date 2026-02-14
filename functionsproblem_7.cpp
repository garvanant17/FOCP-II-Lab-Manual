#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double area();
double area(){
    double r,l,base,height,area,b;
    int choice;
    cout<<"1 for circle, 2 for rectangle, 3 for triangle: ";
    cin>>choice;
    if(choice == 1){
        cout<<"radius: ";
        cin>>r;
        return 3.14 * pow(r,2);
    }
    else if (choice == 2){
        cout<<"enter length and breadth: ";
        cin>>l>>b;
        return l*b;
    }
    else if(choice == 3){
        cout<<"enter base and height: ";
        cin>>base>>height;
        return 0.5*base*height;

    }
    else return 0;

}

int main(){
    double result =  area();
    cout<<"area: "<<result;
}

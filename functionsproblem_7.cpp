#include <iostream>
#include <cmath>
using namespace std;
double area(double r){
    double ans;
    return ans = 3.14*pow(r,2);
}
double area(double l, double b){
double ans;
return ans = l*b;
}
double area(double base,double height, int){
    double ans;
    return ans = 0.5*base*height;
}
int main(){
    int choice;
    cout<<"enter 1 for circle, 2 for rectangle , 3 for triangle: ";
    cin>>choice;
    if(choice==1){
        double radius, result;
        cout<<"radius: ";
        cin>>radius;
        result = area(radius);
        cout<<"area: "<<result;
    }
    else if(choice==2){
        double l, b, result;
        cout<<"length and breadth: ";
        cin>>l>>b;
        result = area(l,b);
        cout<<"area: "<<result;
    }
    else if(choice==3){
        double base, height, result;
        cout<<"base and height: ";
        cin>>base>>height;
        result = area(base, height, 1);
        cout<<"area: "<<result;
    }
    else cout<<"invalid";
}

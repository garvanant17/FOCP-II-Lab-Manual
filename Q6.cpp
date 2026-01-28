//QUESTION 6

#include <iostream>
using namespace std;
int main(){
    int basic, employees, net=0;
    float bonus=0;
cout<<"enter number of employees: ";
cin>>employees;
cout << "enter basic salary of each employee: ";
cin >> basic;
bonus = (0.12*basic) + basic;
net = bonus*employees;
cout<<"salaries after bonus will be "<<bonus<<endl;
cout<<"net salary= "<< net<<endl;

}

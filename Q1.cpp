// QUESTION 1
#include <iostream>
using namespace std;
int main(){
    int marks1, marks2, marks3, total;
    float avg;
    cout<<"enter all three marks: ";
    cin>>marks1>>marks2>>marks3;
    total = marks1 + marks2 + marks3;
    avg = total/3;
    cout<<"class average is "<<avg;
}

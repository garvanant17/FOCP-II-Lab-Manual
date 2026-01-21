#include<iostream>
using namespace std;
int main(){
    int a;
    string s;
    cout<<"enter integer and a string: ";
    cin>>a;
    cin.ignore();
    getline(cin, s);
    cout<<"a = "<<a<<endl<<"s = "<<s;
    
}
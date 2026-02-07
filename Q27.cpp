#include <iostream>
using namespace std;
int main(){
    float items[10];
    float max;
    for(int i = 0; i< 10; i++){
    cout<<"enter price of item " << i+1 <<":";
    cin>>items[i];
    }
    max = items[0];
    for(int i=0; i<10; i++){
        if(max<items[i])
        max = items[i];
    }
    cout<<"maximum price is: " << max;

}

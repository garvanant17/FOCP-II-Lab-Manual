#include <iostream>
using namespace std;
int main(){
    int n, max;
    cout<<"enter the number of enteries: ";
    cin>>n;
    int enteries[n];
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i+1<<" entry: ";
        cin>>enteries[i];
    }
    max = enteries[0];
    for(int i=0;i<n;i++){
        if(max<enteries[i])
        max=enteries[i];
    }
    cout<<"largest number is "<<max;
}

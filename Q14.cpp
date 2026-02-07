#include <iostream>
using namespace std;
int main(){
    string response;
    float n1, n2, ans;
    char op;
    while(true){
        cout<<"enter 2 numbers: ";
        cin>>n1>>n2;
        cout<<"enter the operation(+,-,x,/): ";
        cin>>op;
        if(op == '+'){
        ans = n1+n2;
            cout<<"answer is "<<ans;
    }
        else if(op =='-'){
            ans = n1-n2;
            cout<<"ans is "<<ans;
        }
        else if(op == 'x' || op == 'X'){
            ans = n1*n2;
            cout<<"ans is "<<ans;
        }
        else if(op == '/'){
            ans = n1/n2;
        cout<<"ans is "<<ans;        }
        else cout<<"invalid";
        cout<<endl<<"do you wish to continue?(Y/N): ";
        cin>>response;
        if(response == "Y" || response == "y")
        continue;
        else if(response == "N" || response == "n")
        break;
    }
    return 0;
}

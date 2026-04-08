//Q2
#include <iostream>
using namespace std;
class Account{
    public:
    string account_no;
    double balance; 
    Account(){
        account_no = "XXXXXXXXX";
        balance = 5000  ;
    }
    Account(string account_no, int balance){
        this -> account_no = account_no;
        this -> balance = balance;
    }
    void displayAccount(){
        cout<<"\naccount number: "<<account_no<<"\nbalance: "<<balance;
    }
};
class SavingsAccount: public Account{
double interestrate;
public:
    SavingsAccount(){
        interestrate = 7;
    }
    SavingsAccount(string acc, int bal, double intrate):Account(acc, bal){
        interestrate = intrate;
    }
    int calculateInterest(){
        return (balance + balance*(interestrate/100));
    }
};
int main(){
    Account a1("garv", 100000);
    SavingsAccount s1("garv", 100000, 10);
    a1.displayAccount();
    s1.calculateInterest();
    cout<<"\ninterest: "<<s1.calculateInterest();
    
}

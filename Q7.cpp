// QUESTION 7

#include <iostream>
using namespace std;
int main(){
    int score2, score1, score3;
    cout<<"enter scores of 3 players: ";
    cin>>score1>>score2>>score3;
    if(score1>score2 && score1>score3)
    cout<<"1st player won";
    else if(score2>score1 && score2 >score3)
    cout<<"2nd player won";
    else if(score3>score1 && score3>score2)
    cout<<"3rd player won";
    else
    cout<<"its a tie";
}

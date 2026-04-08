//Q3
#include <iostream>
using namespace std;
class Academic{
    public:
int marks;
Academic(){
    marks = 0;
}
Academic(int marks){
this -> marks = marks;
}
};
class Sports{
    public:
    int score;
    Sports(){
        score = 0;
    }
    Sports(int score){
        this -> score = score;
    }
};
class Result:public Academic, public Sports{
    public:
Result(int m, int s):Academic(m), Sports(s){

}
void displayResult(){
    cout<<"-----RESULT-----";
    cout<<"\nmarks = "<<marks;
    cout<<"\nscore = "<<score;
    cout<<"\ntotal = "<<(score+marks);
}
};
int main(){
    Result r1(50,70);
    r1.displayResult();
}

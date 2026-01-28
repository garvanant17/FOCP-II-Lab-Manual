// QUESTION 9

#include<iostream>
using namespace std;
int main(){
    char letter;
    cout<<"enter the letter: ";
    cin >> letter;
    if(letter>='0' && letter<='9')
    cout<<"its a number";
    else if (letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <= 'z'){
     if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' || letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    cout<<"its a vowel";
    else
        cout<<"its a consonant";
}
else
cout<<"invalid";
}

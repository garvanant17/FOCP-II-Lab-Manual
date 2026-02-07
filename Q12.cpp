#include <iostream>
using namespace std;
int main(){
    float s1,s2,s3;
    cout<<"enter all three sides: ";
    cin>>s1>>s2>>s3;
    if(s1 == s2 && s2 == s3)
    cout<<"equilateral triangle";
    else if(s1 == s2 || s2 == s3 || s1 == s3)
    cout<<"isosceles triangle";
    else if (s1 != s2 && s2 != s3 && s3 != s1)
    cout<<"scalene";
    else cout<<"inavalid";
}

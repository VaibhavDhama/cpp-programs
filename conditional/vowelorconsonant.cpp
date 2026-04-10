#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    int b=(int)a;
    if((b>=65&& b<=90 )||(b>=97&&b<=122)){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            cout<<"the char is a vowel";
        }
        else{
            cout<<"the char is a consonant";
        }
    }
    else{
        cout<<"the char is not a alphabet";
    }
    }

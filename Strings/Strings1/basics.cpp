#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // char str[]={'a','b','\0','c','d'};
    // for(int i=0;str[i]!='\0';i++){
    //     cout<<str[i];
    // }

    // string str= "abcde";
    // cout<<str;

    // string s;
    // cin>>s;
    // cout<<s;

    // string s;
    // getline(cin,s);
    // cout<<s;


    //Reverse
    string str="vaibhav";
    cout<<str;
    cout<<endl;
    // reverse(str.begin(),str.end());
    // cout<<str<<endl;
    reverse(str.begin()+2,str.begin()+5);
    cout<<str;
}
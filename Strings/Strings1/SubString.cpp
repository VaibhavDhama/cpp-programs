#include<iostream>
using namespace std;
int main(){
    // string s="vaibhav";
    // //s.substr(idx,len)
    // cout<<s.substr(3,3);

    string str;
    getline(cin,str);
    int len=str.length();
    cout<<str.substr(len/2);

}
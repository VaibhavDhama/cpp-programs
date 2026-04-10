#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str,str1;
    getline(cin,str);
    getline(cin,str1);
    sort(str.begin(),str.end());
    sort(str1.begin(),str1.end());
    if(str1==str){
        cout<<"Strings are anagram";
    }
    else cout<<"Strings are not anagram";  
}
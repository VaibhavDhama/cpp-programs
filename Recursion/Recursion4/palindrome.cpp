#include<iostream>
#include<vector>
using namespace std;
bool palindrome(string s,int i,int j){
    if(i>j) return true;
    if(s[i]!=s[j]) return false;
    else return(s,i+1,j-1);
}
int main(){
    string s = "physics";
    cout<<palindrome(s,0,s.length()-1);
}
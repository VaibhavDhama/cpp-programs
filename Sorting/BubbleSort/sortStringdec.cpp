#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    string s="";
    for(int i=0;i<str.length();i++){
        if(str[i]>='X'){
            s.push_back(str[i]);
        }
    }
    cout<<s<<endl;
    for(int i=0;i<s.length()-1;i++){
        bool flag=true;
        for(int j=0;j<s.length()-1-i;j++){
            if(s[j+1]>s[j]){
                swap(s[j],s[j+1]);
                flag=false;
            }
        }
        if(flag==true) break;
    }
    cout<<s;
}
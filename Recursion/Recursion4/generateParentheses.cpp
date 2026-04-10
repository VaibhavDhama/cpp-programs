#include<iostream>
using namespace std;
void generate(string ans,int open,int close,int n){
    if(close==n){
        cout<<ans<<endl;
        return;
    }
    if(open<n) generate(ans+'(',open+1,close,n);
    if(close<open) generate(ans+')',open,close+1,n);
}
int main(){
    int n = 3;
    generate("",0,0,n);
}
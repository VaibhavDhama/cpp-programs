#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    bool flag=true;
    for(int i=2;i<=a-1;i++){
        if(a%i==0){
           flag=false;
            break;
        }
    }
        if(a==1) cout<<a<<" is neither prime nor composite";
        else if(flag==true) cout<<a<<" is prime";
        else cout<<a<<" is a composite number";
    
}

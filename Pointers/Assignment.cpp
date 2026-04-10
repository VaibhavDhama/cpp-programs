#include<iostream>
using namespace std;
int main(){
    int a,b,ans;
    cin>>a>>b;
    int* ptr1=&a;
    int* ptr2=&b;
    // int* ptrans=&ans;
    // *ptrans=(*ptr1)*(*ptr2);
    // cout<<*ptrans<<endl;
    cout<<(*ptr1)*(*ptr2)<<endl;
} 
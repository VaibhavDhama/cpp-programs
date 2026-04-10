//parameterised

// #include<iostream>
// using namespace std;
// void sum1toN(int i, int n){
//     if(n==0){
//         cout<<i<<endl;
//         return;
//     }
//     sum1toN(i+n,n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     sum1toN(0,n);
    
// }

// return type

#include<iostream>
using namespace std;
int sum1toN(int n){
    if(n==0) return 0;
    return n + sum1toN(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum1toN(n);   
}
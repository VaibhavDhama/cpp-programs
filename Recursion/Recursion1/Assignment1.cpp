//q1

// #include<iostream>
// using namespace std;
// void print(int i ,int n){
//     if(i>n) return;
//     cout<<i<<" ";
//     print(i+1,n);
//     if(i>1) cout<<i-1<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;
//     print(i,n);
// }


//q2

// #include<iostream>
// using namespace std;
// void sumofOdd(int a, int b, int &sum){
//     if(a>b) return;

//     if(a%2!=0){
//         sum += a;
//         sumofOdd(a+2,b,sum);
//     }
//     else{
//         sumofOdd(a+1,b,sum);
//     }
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     if(a>b) swap(a,b);
//     int sum = 0;
//     sumofOdd(a,b,sum);

//     cout<<sum<<endl;
// }

//q3

#include<iostream>
using namespace std;
bool powerof2(int n){
    if(n==1) return true;
    if(n%2!=0) return false;
    return powerof2(n/2);
}
int main(){
    int n;
    cin>>n;
    cout<<powerof2(n);
}
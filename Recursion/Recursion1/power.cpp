// #include<iostream>
// using namespace std;
// int power(int a, int b){
//     if(a==0) return 0;
//     if(a==0 && b==0){
//         cout<<"Not defined";
//         return -100;
//     }
//     int p = 1;
//     for(int i=1;i<=4;i++){
//         p *= a;
//     }
//     return p;
// }
// int main(){
//     cout<<power(0,0);
// }

// using recursion

#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    cout<<power(5,3);
}

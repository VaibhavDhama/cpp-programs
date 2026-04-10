// q1

// #include<iostream>
// using namespace std;
// int sumofDigits(int n){
//     if(n>=0 && n<=9) return n;
//     return (n%10) + sumofDigits(n/10);
// }
// int main(){2
//     cout<<sumofDigits(5178); 
// }

// q2

#include<iostream>
using namespace std;
int reverse(int n, int &ans){
    if(n<=0) return ans;
    int digit = n%10;
    ans = ans*10 + digit;
    return reverse(n/10,ans);
}
int main(){
    int ans = 0;
    cout<<reverse(689,ans);
}
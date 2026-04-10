// #include<iostream>
// using namespace std;
// int main(){
//     char ch='#';
//     cout<<ch;
// }

//QUESTIONS 1
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     float b=(float)a/2;
//     cout<<b;
// }

// QUESTION 2
#include<iostream>
using namespace std;
int main(){
    float a;
    cin>>a;
    int b=int(a);
    if(b<0) b=b-1;
    float z=a-b;
    cout<<z;
}
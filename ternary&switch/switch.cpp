//Example 1
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     switch(x){
//         case 1:
//         cout<<"monday";
//         break;
//         case 2:
//         cout<<"tuesday";
//         break;
//         case 3:
//         cout<<"wednesday";
//         break;
//         case 4:
//         cout<<"thrusday";
//         break;
//         case 5:
//         cout<<"friday";
//         break;
//         case 6:
//         cout<<"saturday";
//         break;
//         case 7:
//         cout<<"sunday";
//         break;
//         default:
//         cout<<"there are only 7 days in a week";

//     }
// }

// Example 2
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cin>>a>>op>>b;
    switch(op){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<(float)a/b;
        break;
        default:
        cout<<"invalid operation applied";
    }
}
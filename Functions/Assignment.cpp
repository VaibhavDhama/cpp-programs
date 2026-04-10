//Ques1

// #include<iostream>
// using namespace std;
// int square(int n){
//     int square=n*n;
//     return square;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cout<<square(i)<<endl;
//     }
// }

//Ques2

// #include<iostream>
// using namespace std;
// float area(int r){
//     float area=3.14*r*r;
//     return area;
// }
// int main(){
//     int r;
//     cin>>r;
//     cout<<area(r);
// }

//Ques 3

// #include<iostream>
// using namespace std;
// void oddnumber(int a,int b){
//     if(a>b){
//         int swap=b;
//         b=a;
//         a=swap;
//     }
//     for(int i=a;i<=b;i++){
//         if(i%2!=0) cout<<i<<endl;
//     else continue;
//     }
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     oddnumber(a,b);
// }

//Ques 4
 
// #include<iostream>
// using namespace std;
// int square(int n){
//     int square=n*n;
//     return square;
// }
// int digits(int n){
//     int count=0;
//     while(n){
//     count++;
//     n=n/10;
//     }
//     return count;
// }
// int main(){
//     int n;
//     cin>>n;
//     int digit=digits(n);
//     cout<<square(digit)<<endl;
// }

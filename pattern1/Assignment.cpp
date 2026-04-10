//Ques 3

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<char(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }

//Ques 4

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i%2!=0) cout<<j;
//             else cout<<char(j+64);
//         }
//         cout<<endl;
//     }
// }

//Ques 5

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=n-1;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//Ques 6

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"Enter n ";
//     cin>>n;
//     cout<<"Enter m ";
//     cin>>m;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1||i==4||j==1||j==4){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

//Ques 7

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//             for(int k=1;k<=n;k++){
//                 cout<<"*";
//             }
//         cout<<endl;
//     }
//     }

//Ques 9

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<char(k+64);
//         }
//         cout<<endl;
//     }
// }

//Ques 10

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

//Ques 11

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int nsp=n-1;
//     int nst=1;
//     cout<<"Enter rows: ";
//     cin>>n;
//     for(int i=1;i<=2*n-1;i++){
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         if(i<=n-1) nsp--;
//         else nsp++;
//         for(int k=1;k<=nst;k++){
//         cout<<"*";
//     }
//     if(i<=n-1) nst++;
//     else nst--;
//     cout<<endl;
//     }
// }
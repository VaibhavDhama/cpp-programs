//Ques 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter rows: ";
//     cin>>n;
//     int nsp=n-1;
//     int nst=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=nsp;j++){
//             cout<<" ";
//         }
//         nsp--;
//         for(int k=1;k<=nst;k++){
//         cout<<k;
//         }
//         nst+=2;
//         cout<<endl;
//     }
// }

//Ques 3
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
//         for(int k=i;k>=1;k--){
//             cout<<char(64+k);
//         }
//         for(int q=1;q<i;q++){
//             cout<<char(65+q);
//         }
//         cout<<endl;
//     }
// }

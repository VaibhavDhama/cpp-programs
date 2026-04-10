//Q2

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     int arr1[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr1[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             arr1[i][j]=arr[i][j]+arr1[i][j];
//             cout<<arr1[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// Q3

// #include<iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     int l1,r1,l2,r2;
//     cin>>l1>>r1>>l2>>r2;
//     int sum=0;
//     for(int i=min(l1,l2);i<=max(l1,l2);i++){
//         for(int j=min(r1,r2);j<=max(r1,r2);j++){
//             sum+=arr[i][j];
//         }
//     }
//     cout<<sum;
// }

//Q5

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int m,n;
//     cin>>m>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;

//     int max=INT_MIN;
//     int row=-1;
    
//     for(int i=0;i<m;i++){
//         int sum=0;
//         for(int j=0;j<n;j++){
//             sum+=arr[i][j];
//             if(max<sum){
//                 max=sum;
//                 row=i;
//             }
//         }
//     }
//     cout<<"Maximum sum row is: "<<row;
// }

//Q6

// #include<iostream>
// using namespace std;
// int main(){
//     int m;
//     cin>>m;
//     int arr[m][m];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             if(i==m/2 || j==m/2) cout<<arr[i][j]<<" ";
//             else cout<<"  ";
//         }
//         cout<<endl;
//     }
// }

//Q1
// #include<iostream>
// using namespace std;
// int main(){
//     int m=5;
//     int n=5;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             arr[i][j]=10;
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

//Q4
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int m,n;
//     cin>>m>>n;
//     int arr[m][n];
//     int max=INT_MIN;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i][j]>max) max=arr[i][j];
//         }
//     }
//     cout<<max;
// }
#include<iostream>
using namespace std;
int main(){
        int n;
    cout<<"Enter no of rows: ";
    cin>>n;
    int m;
    cout<<"Enter no of columns: ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
            }
        else{
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
    // int n;
    // cout<<"Enter no of rows: ";
    // cin>>n;
    // int m;
    // cout<<"Enter no of columns: ";
    // cin>>m;
    // int arr[n][m];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>arr[i][j];
    //     }
    // }
//     for(int i=0;i<n;i++){
//         if(i%2==0){
//             for(int j=0;j<m;j++){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             for(int j=m-1;j>=0;j--){
//                 cout<<arr[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }
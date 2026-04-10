//Ques 3

// #include <iostream>
// using namespace std;
// int main() {
// int arr[5]={1,2,3,4,7};
// for (int i = 0; i < 5; i++){
// if (arr[i]>arr[i+1]){
// cout<<"NO"<<endl;
// return 0;
// }
// }
// cout<<"YES"<<endl;
// }

//Ques 5

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i+=2){
//         arr[i]=arr[i]+10;
//     }
//     for(int i=1;i<n;i+=2){
//         arr[i]=arr[i]*2;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Ques 6

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        bool flag=true;
        for(int k=0;k<n;k++){
            if(j!=k && arr[k]==arr[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){cout<<arr[j];
        break;
        }
    }
}

//Ques 7

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool flag=true;
//     for(int i=0,j=n-1;i<j;i++,j--){
//         if(arr[i]!=arr[j]){
//             flag=false;
//         }
//     }
//     if(flag==false) cout<<"no";
//     else cout<<"yes";
// }
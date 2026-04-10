//q4 minimun_sum

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {5,1,5,5,2,3};
//     int n=6;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     for(int i=1;i<n;i++){
//         int j = i;
//         while(j>=1 && arr[j]<arr[j-1]){
//             swap(arr[j],arr[j-1]);
//             j--;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // storing the sorted array into an integer
//     int x=0;
//     for(int i=0;i<n;i++){
//         x *= 10;
//         x += arr[i];
//     }
//     cout<<x<<endl;

//     //for second minimum, we need to change in sorted array
//     for(int i=n-1;i>=1;i--){
//         if(arr[i]!=arr[i-1]){
//             swap(arr[i],arr[i-1]);
//             break;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     //making this array into integer
//     int y=0;
//     for(int i=0;i<n;i++){
//         y *= 10;
//         y += arr[i];
//     }
//     cout<<y<<endl;
//     cout<<x+y;
// }


//q5 sort_strings

#include<iostream>
using namespace std;
int main(){
    string arr[] = {"raghav","urvi","harsh","vishwa","sanket","manvi","hyder","priya"};
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

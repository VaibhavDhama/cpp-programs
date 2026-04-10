#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;
    int submax=INT_MIN;
     for(int i=0;i<=n-1;i++){
        if(arr[i]!=max && arr[i]>submax){
            submax=arr[i];
        }
     }
    cout<<submax;
}
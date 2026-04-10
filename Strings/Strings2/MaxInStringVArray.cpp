#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    string x=arr[0];
    for(int i=0;i<n;i++){
        int arr1=stoi(arr[i]);
        if(arr1>max) {
        max=arr1;
        x=arr[i];
    }
}
cout<<max<<endl;
cout<<x;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter elements in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter no you want to search: ";
    cin>>x;
    int flag=false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag=true;
    }
    if(flag==true) cout<<"present";
    else cout<<"not present";
}

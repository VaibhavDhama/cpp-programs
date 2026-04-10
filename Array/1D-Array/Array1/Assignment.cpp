// Ques 4

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int flag=false;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
    }
    if(flag==false) cout<<"no duplicates";
    else cout<<"duplicates";
}



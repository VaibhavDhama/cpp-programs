#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
    }
    }
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<max;
    cout<<endl;
    //Second largest element
    int submax=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=max && submax<arr[i][j]) submax=arr[i][j];
        }
    }
    cout<<submax;
}
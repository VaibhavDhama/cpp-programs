#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void printmax(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max = arr[idx];
    printmax(arr,n,idx+1,max);
}
int maxInarray(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxInarray(arr,n,idx+1));
}
int main(){
    int arr[] = {2,1,6,3,9,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    // printmax(arr,n,0,INT_MIN);
    cout<<maxInarray(arr,n,0);
}
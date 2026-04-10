// question 2 - no of ones in sorted binary array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,0,0,0,0,1,1,1,1};
    int n = 9;
    int x = 1;

    int lo = 0;
    int hi = n-1;
    int firstindex = -1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[0] || arr[mid-1]!=x){
                firstindex = mid;
                break;
            }
            else {
                hi = mid-1;
            }
        }
        else if(arr[mid]<x) lo = mid+1;
        else hi = mid-1;
    }
    if(firstindex==-1) cout<<0;
    else cout<<n-firstindex;
}

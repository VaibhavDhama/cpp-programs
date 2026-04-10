#include<iostream>
using namespace std;
int main(){
    int arr[5][6] = {{0,0,0,0,1,1},{0,0,1,1,1,1},{0,0,0,1,1,1},{0,1,1,1,1,1},{0,0,0,0,1,1}};
    int m = 5; //rows
    int n = 6; //columns
    int x = 1;
    int row = 0;
    int maxOnes = 0;

    for(int i=0;i<m;i++){ //bs on every row
        int count = 0; // no of ones in ith row
        int lo = 0;
        int hi = n-1;
        int firstindex = -1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[i][mid]==x){
                if(arr[i][0] || arr[i][mid-1]!=x){
                    firstindex = mid;
                    break;
                }
                else {
                    hi = mid-1;
                }
            }
            else if(arr[i][mid]<x) lo = mid+1;
            else hi = mid-1;
        }
        if(firstindex==-1) count = 0;
        else count = n-firstindex;
        if(maxOnes<=count){
            maxOnes=count;
            row = i;
        }
    }  
    cout<<row;  
}

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[] = {19,12,23,8,16};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x = 0;
    vector<int> v(n,0); // 0 means not visited
    for(int i=0;i<n;i++){
        int min = INT8_MAX;
        int mindx = -1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(min>arr[j]){
                    min=arr[j];
                    mindx=j;
                }
            }
        }
        arr[mindx] = x;
        v[mindx] = 1; //visited
        x++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
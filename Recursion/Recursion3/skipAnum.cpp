#include<iostream>
#include<vector>
using namespace std;
void removeNum(vector<int> &ans,int arr[],int n,int idx){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return;
    }
    int num = arr[idx];
    if(num==1) removeNum(ans,arr,n,idx+1);
    else{
        ans.push_back(arr[idx]);
        removeNum(ans,arr,n,idx+1);
    }
}
int main(){
    int arr[] = {1,2,3,1,4,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    removeNum(v,arr,n,0);
}

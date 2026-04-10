#include<iostream>
#include<vector>
using namespace std;
void subsetArray(vector<int> ans,int arr[],int n,int idx){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subsetArray(ans,arr,n,idx+1);
    ans.push_back(arr[idx]);
    subsetArray(ans,arr,n,idx+1);
}
int main(){
    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    subsetArray(v,arr,n,0);
}
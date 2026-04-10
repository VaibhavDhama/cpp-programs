#include<iostream>
#include<vector>
using namespace std;
void subsequence(vector<int> ans,int arr[],int n,int idx,int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(ans.size()+(n-2)<k) return;
    subsequence(ans,arr,n,idx+1,k);
    ans.push_back(arr[idx]);
    subsequence(ans,arr,n,idx+1,k);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int k = 3;
    subsequence(v,arr,n,0,k);

}
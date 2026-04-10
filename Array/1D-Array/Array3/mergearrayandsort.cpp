#include<iostream>
#include<vector>
using namespace std;
vector<int>merge(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int>res(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
            k++;
        }
        else if(arr2[j]<arr1[i]){
            res[k]=arr2[j];
            j++;
            k++;
        }
    }
        if(i==n){
            while(j<m){
                res[k]=arr2[j];
                k++;
                j++;
            }
        }
        if(j==m){
            while(i<n){
                res[k]=arr1[i];
                k++;
                i++;
            }
        }
        return res;
    }
    
int main(){
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int>v=merge(arr1,arr2);
    for(int i=0;i<n+m;i++){
        cout<<v[i];
    }
    
}

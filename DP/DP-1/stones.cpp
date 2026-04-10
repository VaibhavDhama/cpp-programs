#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> h; // heights
vector<int> dp;

int f(int i,int k){
    if(i>=h.size()){
        return INT_MAX;
    }
    if(i==h.size()-1){
        // laststone
        return 0;
    }
    if(dp[i]!=-1) return dp[i];
    int ans = INT_MAX;
    for(int j=1;j<=k;j++){
        if(i+j>=h.size()) break;
        ans = min(ans,abs(h[i]-h[i+j])+f(i+j,k));
    }
    return dp[i] = ans;
}

int main(){
    int n,k;
    cin>>n>>k;
    h.resize(n);
    dp.resize(n,-1);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    cout<<f(0,k)<<" ";
}
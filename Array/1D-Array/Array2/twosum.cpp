#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<<v[i]<<" and "<<v[j]<<" are the numbers"<<endl;
            }
        }
    }
}
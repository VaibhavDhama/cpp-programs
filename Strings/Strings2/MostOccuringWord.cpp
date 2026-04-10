#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    cout<<endl;
    sort(v.begin(),v.end());
    int maxcount=1;
    int count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count>maxcount) maxcount=count;
        //or maxcount=max(maxcount,max)
    }
    count=1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(maxcount==count){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }

}
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "vaibhav";
    p1.second = 22;
    
    m["raghav"] = 45;

    m.insert(p1);

    cout<<m.size()<<endl;
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    } 
    m.erase("raghav");
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    } 
}       
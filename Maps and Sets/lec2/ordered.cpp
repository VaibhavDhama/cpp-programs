#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(5);
    // s.insert(3);
    // s.insert(7);
    // for(int ele: s){
    //     cout<<ele<<" ";
    // }
    map<string,int> m;
    // 1,30  2,20  3,10

    m["Raghav"] = 20;
    m["Harsh"] = 10;
    m["Sanket"] = 30;
    for(auto x: m){
        cout<<x.first<<" ";
    }
}
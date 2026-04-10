#include<iostream>
#include<vector>
using namespace std;
// void printSubset(string ans, string original){
//     if(original==""){
//         cout<<ans<<endl;
//         return;
//     }
//     char ch = original[0];
//     printSubset(ans+ch,original.substr(1));
//     printSubset(ans,original.substr(1));
// }
void printSubset1(string ans, string original,int idx,vector<string>& v){
    if(idx==original.length()){
        v.push_back(ans);
        return;
    }
    char ch = original[idx];
    printSubset1(ans+ch,original,idx+1,v);
    printSubset1(ans,original,idx+1,v);
}
int main(){
    string s = "abc";
    // printSubset("",s);
    vector<string> v;
    printSubset1("",s,0,v); 
    for(string ele : v){
        cout<<ele<<endl;
    }
}
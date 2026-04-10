#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);
    v.push_back(4);
    display(v);
    cout<<endl;
    vector<int>v2(v.size());
    for(int i=0;i<v.size();i++){
        int j=v.size()-1-i;
        v2[i]=v[j];
    }
    display(v2);
}

// using 1 array only (through pointers)

// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(9);
//     v.push_back(7);
//     v.push_back(5);
//     v.push_back(4);
//     display(v);
//     cout<<endl;
//     for(int i=0,j=v.size()-1;i<=j;i++,j--){
//         int temp=v[j];
//         v[j]=v[i];
//         v[i]=temp;
//     }
//     display(v);
// }
//methord 1

// #include<iostream>
// #include<vector>
// using namespace std;
// void sort1(vector<int> &v){
//     int zero=0;
//     int one=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i]==0) zero++;
//         else one++;
//     }
//     for(int j=0;j<v.size();j++){
//         if(j<zero) v[j]=0;
//         else v[j]=1;
//     }
// }
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     sort1(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i];
//     }
// }

// Methord 2

#include<iostream>
#include<vector>
using namespace std;
void sort2(vector<int>&v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if (v[i]==0) i++;
        if(v[j]==1) j--;
        // if(i>j) break; 
        // loop will not go to below condition if we use break or else if.
        else if(v[i]==1 && v[j]==0){
            v[j]=1;
            v[i]=0;
            i++;
            j--;
        }  
    }

}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort2(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

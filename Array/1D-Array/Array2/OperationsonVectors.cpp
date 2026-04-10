//pop_back

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
    // vector<int>v;
    // v.push_back(1);
    // v.push_back(9);
    // v.push_back(7);
    // v.push_back(5);
    // v.push_back(4);
//     v.push_back(3);
//     v.push_back(8);
//     v.push_back(0);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     v.pop_back();
//     cout<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }

//sort and v.at 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v.at(i);
    }
    for(int i=0;i<n;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
     for(int i=0;i<n;i++){
        cout<<v.at(i)<<" ";
     }
}
    

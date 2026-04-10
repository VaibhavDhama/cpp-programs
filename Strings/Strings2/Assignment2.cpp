//Q1

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     string res="";
//     for(int i=str.length();i>=0;i--){
//         res+=str[i];
//     }
//     cout<<str+res;
// }

//Q2

// #include<iostream>
// #include<climits>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     vector<string>s;
//     for(int i=0;i<str.length();i++){
//         string a=" ";
//         a+=str[i];
//         s.push_back(a);
//     }
//     int max=INT_MIN;
//     for(int i=0;i<s.size();i++){
//         int value=stoi(s[i]);
//         if(value>max) max=value;
//     }
//     int smax=INT_MIN;
//     for(int i=0;i<s.size();i++){
//         int value=stoi(s[i]);
//         if(value>smax && value!=max) smax=value;
//     }
//     cout<<smax;
    
// }

//Q4

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s,t;
//     cin>>s>>t;
//     sort(s.begin(),s.end());
//     sort(t.begin(),t.end());
//     if(s==t) cout<<"It is anagram";
//     else cout<<"Not a anagram";
// }


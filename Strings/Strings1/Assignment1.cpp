//Q1

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     for(int i=0;i<str.length();i++ ){
//         if(i%2!=0) str[i]='#';
//     }
//     cout<<str;  
// }

//Q2

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     int count=0;
//     for(int i=0;i<str.length();i++){
//         if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
//             count++;
//         }
//     }
//     cout<<count;
// }

//Q3

// #include<iostream>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     int n=str.length();
//     bool flag=true;
//     for(int i=0,j=n-1;i<=j;i++,j--)
//         if(str[i]!=str[j]){
//         flag=false;
//         break;
//         }
//     if(flag==true) cout<<"palindrome";
//     else cout<<"not palindrome";
// }

//Q4

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str;
//     getline(cin,str);
//     int n=str.length();
//     reverse(str.begin()+n/2,str.end());
//     cout<<str;
// }


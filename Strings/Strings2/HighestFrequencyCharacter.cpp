#include <iostream>
#include<vector>
using namespace std;
int main()
{
    // string str;
    // getline(cin, str);
    // int n = str.size();
    // int max_count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int count = 1;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (str[i] == str[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count > max_count)
    //         max_count = count;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     int count = 1;
    //     char ch=str[i];
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (str[i] == str[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count==max_count) cout<<ch<<" "<<count<<endl;
    // }

    string str="vaibhav";
    vector<int>arr(26,0);
    for(int i=0;i<str.length();i++){
        int ch=str[i];
        int ascii=int(ch);
        arr[ascii-97]++;
    }
    int max=0;
    for(int i=0;i<26;i++){
        if(arr[i]>max) max=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==max){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<max<<endl;
        }
    }
}
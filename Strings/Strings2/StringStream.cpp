#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string str="Vaibhav is a college student";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}
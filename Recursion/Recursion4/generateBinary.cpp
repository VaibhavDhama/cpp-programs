#include<iostream>
using namespace std;
int n = 4;
void generateBinary(string s){
    if(s.length()==n) {
        cout<<s<<endl;
        return;
    }
    generateBinary(s+'0');
    if(s[s.length()-1]=='1') return;
    generateBinary(s+'1');

}
int main(){
    generateBinary("");
}
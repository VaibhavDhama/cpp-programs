#include<iostream>
using namespace std;
void factupto(int x){
    int ans = 1;
    for(int i=1;i<=x;i++){
        ans *= i;
        cout<<ans<<endl;
    }
}
int main(){
    factupto(5);
}
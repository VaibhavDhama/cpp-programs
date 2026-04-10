#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void display(queue<int>& q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";  
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverseK(int k, queue<int>& q){
    stack<int> st;
    for(int i=1;i<=k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    int n = q.size();
    for(int i=1;i<=n-k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    display(q);
    int k = 5;
    reverseK(k,q);
    display(q);
}
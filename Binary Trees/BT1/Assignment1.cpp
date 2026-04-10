#include<iostream>
#include<climits>
using namespace std;
class Tree{
public:
    int val;
    Tree* left;
    Tree* right;
    Tree(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int product(Tree* root){
    if(root==NULL) return 1;
    return root->val * product(root->left) * product(root->right);
}
int minimum(Tree* root){
    if(root==NULL) return INT_MAX;
    return min(root->val,min(minimum(root->left),minimum(root->right)));
}
int main(){
    Tree* a = new Tree(1); // root
    Tree* b = new Tree(2);
    Tree* c = new Tree(3);
    Tree* d = new Tree(4);
    Tree* e = new Tree(5);
    Tree* f = new Tree(6);
    Tree* g = new Tree(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout<<product(a)<<endl; 
    cout<<minimum(a);
}
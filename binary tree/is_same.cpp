// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
void preorder(node*root){
    if(!root) return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
bool issimlar(node* root1,node* root2){
    if(root1==nullptr&&root2==nullptr)return true;
    if(root1==nullptr||root2==nullptr)return false;
    return (root1->data==root2->data)&&
        issimlar(root1->left,root2->left)&&
        issimlar(root1->right,root2->right);
        
    
}
int main() {

    
    node* root=new node(1);
    node* left=new node(2);
    node* right=new node(3);
    root->right=right;
    root->left=left;
    node* left_2=new node(4);
    left->left=left_2;

    node* root1=new node(1);
    node* left1=new node(2);
    node* right1=new node(3);
    root1->right=right1;
    root1->left=left1;
    node* left1_2=new node(4);
    left1->left=left1_2;

   
    cout<<issimlar(root->left,root1);
    return 0;
}
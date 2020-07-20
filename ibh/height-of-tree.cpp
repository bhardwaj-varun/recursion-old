#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node * left;
        Node * right;
};

Node *root;
void createTree(){
    /*
                10
               /  \
              5    6
            /  \   /  \
          4    3  2    1
        /
       7
         
    */
    root = new Node();
    root->data=10;
    root->left = new Node();
    root->left->data = 5;
    root->left->left = new Node();
    root->left->left->data=4;
    root->left->right=new Node();
    root->left->right->data=3;
    root->left->left->left=new Node();
    root->left->left->left->data=7;

    root->right = new Node();
    root->right->data=6;
    root->right->left= new Node();
    root->right->left->data=2;
    root->right->right= new Node();
    root->right->right->data = 1;
}
void inorder(Node * root){
    if(root == NULL)
        return;
    if(root->left)
        inorder(root->left);
    cout<<root->data<<" ";
    if(root->right)
        inorder(root->right);
}
int height(Node *root){
    if(root==NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);

    return 1 + max(lh, rh);
}
int main(){
    createTree();
    //inorder(root);
    cout<< height(root);
}
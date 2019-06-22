#include<iostream>
#include<queue>
#include "btree.h"
#include "btree.cpp"
using namespace std;
//            5
//           / \
//          3   4
//         /     \
//        2       1
int main()
{
    node *root=newnode(5);
    root->left=newnode(3);
    root->left->left=newnode(2);
    root->right=newnode(4);
    root->right->right=newnode(1);
    insert(root,10);
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    preorder(root);
}

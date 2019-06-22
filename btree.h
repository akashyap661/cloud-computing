#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include<iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node *left,*right;
};

node* newnode(int key);
void insert(node *temp,int key);
void inorder(node *temp);
void preorder(node *temp);
void postorder(node *temp);
#endif // BINARY_TREE_H

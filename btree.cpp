#include "btree.h"

node* newnode(int key)
{
    node *temp=new node();
    temp->data=key;
    temp->left=temp->right=NULL;
    return temp;
}
void insert(node *temp,int key)
{
    queue<node*> q;
    q.push(temp);
    while(!q.empty())
    {
        node *temp=q.front();
        q.pop();
        if(!temp->left)
        {
            temp->left=newnode(key);
            break;
        }
        else
            q.push(temp->left);
        if(!temp->right)
        {
            temp->right=newnode(key);
            break;
        }
        else
            q.push(temp->right);
    }
}
void inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}
void postorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}

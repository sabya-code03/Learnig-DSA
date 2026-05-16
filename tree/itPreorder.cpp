//  Iterative Preorder Traversal in Binary Tree without reccursion
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
vector<int> PreorderTravershal(node *root)
{
    vector<int> preorder;
    stack<node *> temp;
    if (root == NULL)
    {
        return preorder;
    }
    temp.push(root);
    while (!temp.empty())
    {
        root = temp.top();
        temp.pop();
        preorder.push_back(root->data);
        if (root->right != NULL)
        {
            temp.push(root->right);
        }
        if (root->left != NULL)
        {
            temp.push(root->left);
        }
    }
    return preorder;
}
int main()
{
    node *root;
    root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
   vector<int> x = PreorderTravershal(root);
   for(int i = 0 ; i<x.size(); i++)
   {
    cout<< x[i] <<" ";
   }
    return 0 ;
}

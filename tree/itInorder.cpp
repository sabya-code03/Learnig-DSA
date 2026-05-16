// iterative Inorder Traversal in Binary Tree without reccursion
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        data = val;
        left = right = NULL;
    }
};
vector<int> InorderTravershal(TreeNode *root)
{
    vector<int> Inorder;
    TreeNode *node;
    stack<TreeNode *> temp;
    node = root;
    while (node != NULL || !temp.empty())
    {
        if (node != NULL)
        {
            temp.push(node);
            node = node->left;
        }
        else
        {
            node = temp.top();
            temp.pop();
            Inorder.push_back(node->data);
            node = node ->right; 


        }
    }
    return Inorder;
}

int main()
{
   TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    vector<int> ans = InorderTravershal(root);
   for(int val : ans) {
        cout << val << " ";
    }
    return 0;
}
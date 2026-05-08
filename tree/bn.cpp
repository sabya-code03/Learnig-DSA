#include<bits/stdc++.h>
using namespace std;
// just for declaration 
struct  node
{
    int data ;
    node* left;
    node* right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int main()
{
    struct node* root;
    root = new node(1);
    root -> left = new node(2) ;
    root ->right = new node(3);


}

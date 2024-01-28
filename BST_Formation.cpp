#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(){
        val = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
    TreeNode(int data, TreeNode* leftchild, TreeNode* rightchild){
        val = data;
        left = leftchild;
        right = rightchild;
    }
};

TreeNode* insertNode(TreeNode* root, int val){
    if (root == NULL)
    {
        /* code */
        return new TreeNode(val);
    }
    
    if (val < root->val){
        root -> left = insertNode(root->left,val);
    }
    else if (val > root->val){
        root -> right = insertNode(root->right,val);
    }

    return root;
}

void inorderTraversal(TreeNode* root){
    if (root == NULL)
    {
        /* code */
        return;
    }
    inorderTraversal(root->left);
    cout<<root->val<<" ";
    inorderTraversal(root->right);
}


int main(){
    TreeNode* root = nullptr;
    root = insertNode(root, 20);
    root = insertNode(root, 5);
    root = insertNode(root, 15);
    root = insertNode(root, 2);
    root = insertNode(root, 3);
    root = insertNode(root, 10);
    root = insertNode(root, 30);

    cout << "-------------- BST ---------------" << endl;
    inorderTraversal(root);
    cout << endl;

    return 0;
}

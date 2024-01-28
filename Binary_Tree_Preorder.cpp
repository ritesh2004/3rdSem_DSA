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
    TreeNode(int data,TreeNode* left,TreeNode* right){
        val = data;
        left = left;
        right = right;
    }
};

class preOrderSolution{
    public:
    void preorder(TreeNode* root, vector<int>&v){
        if (root == NULL) return;
        v.push_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);
    }

    vector<int> preorderTraversal(TreeNode* root){
        vector<int>v;
        preorder(root,v);
        return v;
    }
};

void print(vector<int> &result){
    for (int i = 0; i < result.size(); i++)
    {
        /* code */
        cout<<result.at(i)<<' ';
    }
    
}

int main(){
    preOrderSolution obj;
    vector<int>result;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    result = obj.preorderTraversal(root);
    print(result);
}
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
    TreeNode(int data, TreeNode* left, TreeNode* right){
        val = data;
        left = left;
        right = right;
    }
};


class Solution{
    public:
    void inorder(TreeNode* root, vector<int>&v){
        if (root == NULL) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }

    vector<int> inorderTraversal(TreeNode* root){
        vector<int>v;
        inorder(root,v);
        return v;
    }
};

void print(std::vector<int> const &result)
{
    for (int i = 0; i < result.size(); i++) {
        std::cout << result.at(i) << ' ';
    }
}

int main(){
    Solution s;
    vector<int> result;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    result = s.inorderTraversal(root);
    print(result);
}
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

class postOrderSolution{
    public:
    void postorder(TreeNode* root, vector<int>&v){
        if (root == NULL) return;
        postorder(root->left,v);
        postorder(root->right,v);
        v.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root){
        vector<int>v;
        postorder(root,v);
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
    postOrderSolution obj;
    vector<int>result;
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    result = obj.postorderTraversal(root);
    print(result);
}
//* https://leetcode.com/problems/same-tree/
// Given the roots of two binary trees p and q, write a function to check if they are the same or not.

//! Method 1
/*
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> v1;
        vector<int> v2;
        
        dfs(p,v1);
        dfs(q,v2);

        return (v1 == v2);
        
    }
    
    void dfs(TreeNode* root, vector<int>& v){
        if(root == NULL){
            v.push_back(0);
            return;
        }
        
        dfs(root->left, v);
        dfs(root->right,v);
        v.push_back(root->val);
        
    }
    
};

! Method 2
bool isSameTree(TreeNode *p, TreeNode *q) {
    if (p == NULL || q == NULL) return (p == q);
    return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
}
*/

//* Check if tree is symmetric or not
//* https://leetcode.com/problems/symmetric-tree/
/*
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
        if(root==NULL) return true; //Tree is empty
        
        return isSymmetricTest(root->left,root->right);
    }
    
    bool isSymmetricTest(TreeNode* p , TreeNode* q){
        if(p == NULL && q == NULL) //left & right node is NULL 
            return true; 
        
        else if(p == NULL || q == NULL) //one of them is Not NULL
            return false; 
        
        else if(p->val!=q->val) 
            return false;
        
        return isSymmetricTest(p->left,q->right) && isSymmetricTest(p->right,q->left); //comparing left subtree's left child with right subtree's right child --AND-- comparing left subtree's right child with right subtree's left child
    }
};*/
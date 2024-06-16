//* Preorder => root-left-right
//? All approches - https://leetcode.com/problems/binary-tree-inorder-traversal/solution/

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node* node){
    if(node == NULL) return;

    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void inorder(Node* node){
    if(node == NULL){
        return;
    }
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void postorder(Node* node){
    if(node == NULL){
        return;
    }
    inorder(node->left);
    inorder(node->right);
    cout<<node->data<<" ";
}

int main (){
    Node* root = new Node(1);

    root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);

/* 
                1
            /     \
           2       3
          / \     / \
         4  NULL NULL NULL
        / \
     NULL NULL

    */
cout<<"Pre-order - ";
preorder(root);

cout<<"\nIn-order - ";
inorder(root);

cout<<"\nPost-order - ";
postorder(root);

}

/* 
* Leetcode
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> v;
        inorder(root, v);
        return v;
    }
    
    void inorder(TreeNode* root, vector<int> &v)
    {
        if(root == NULL) return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);

    }
};
*/

/*
^ Level order Traversal/ BFS
? https://leetcode.com/problems/binary-tree-level-order-traversal/
Input: root = [3,9,20,null,null,15,7]
Output: [[3],[9,20],[15,7]]



 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 
&class Solution {
&public:
&    vector<vector<int>> levelOrder(TreeNode* root) {
&        vector<vector<int>> ans;
&        if(root == NULL) return ans;
&        queue<TreeNode*> q;
&        q.push(root);
&        while(!q.empty()){
&            int n = q.size();
&            vector<int> lev;
&
&            for(int i = 0; i<n; i++){
&                TreeNode* node = q.front();
&                q.pop();
&                
&                if(node->left) q.push(node->left);
&                if(node->right) q.push(node->right);
&                lev.push_back(node->val);
&            }
&            ans.push_back(lev);
&        }
&       return ans;
&    }
};
*/
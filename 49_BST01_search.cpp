/*
You are given the root of a binary search tree (BST) and an integer val.

Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null.
*/


//* Iterative approch
/*
class Solution
{
public:
    //     TreeNode* searchBST(TreeNode* root, int val) {
    //         while(root){
    //         if(val == root->val) return root;

    //         else if(val < root->val){
    //             root = root->left;
    //         }

    //         else{
    //             root = root->right;
    //         }
    //         }
    //            return NULL;
    //     }

    TreeNode *searchBST(TreeNode *root, int val)
    {
        while (root != NULL && root->val != val)
        {
            root = (root->val > val) ? root->left : root->right;
        }
        return root;
    }
};
*/

//* Reccusive approch
/*
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL)
            return NULL;
        if(root->val == val) return root;
        else if(root->val > val) return searchBST(root->left,val);
        else return searchBST(root->right,val);
    }
*/

//!Time  Complexity: O(N) for the worst case that the BST is a single chain, for a Balanced Binary Tree it would be O(logN)

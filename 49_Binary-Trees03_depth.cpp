/*
? https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
Recursion:
Lets have faith in recursion and assume that we are already given the maximum depth of root's left and right subtrees by recursion.
So to fnd the maximum depth of this binary tree, we will have to take out the maximum of the 2 depths given to us by recursion, and add 1 to that to consider the current level i.e. root's level into our depth.
*/

/*
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        
        return 1+ max(lh,rh);
    }
};
*/
//* https://leetcode.com/problems/insert-into-a-binary-search-tree/discuss/1684062/C%2B%2BJavaPython-2-Solutions-oror-4-Lines-oror-Image-Explanation-oror-Beginner-Friendly
/*
You are given the root node of a binary search tree (BST) and a value to insert into the tree. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.
*/
/*
class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {
        if (root == NULL)
            return new TreeNode(val);

        TreeNode *cur = root;

        while (true)
        {
            if (cur->val < val)
            {
                if (cur->right != NULL)
                    cur = cur->right;
                else
                {
                    cur->right = new TreeNode(val);
                    break;
                }
            }
            else
            {
                if (cur->left != NULL)
                    cur = cur->left;
                else
                {
                    cur->left = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
};
*/

//! T.C => O(log(n))
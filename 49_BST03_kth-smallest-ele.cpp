//! Problem link - https://leetcode.com/problems/kth-smallest-element-in-a-bst/

//* detailed solution - https://leetcode.com/problems/kth-smallest-element-in-a-bst/discuss/1960046/Multiple-C%2B%2B-solutions-with-explanations-and-time-complexity!

/*
//* Vector solution
class Solution
{
public:
    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> v;

        inorder(root, v);

        int ans = v[k - 1];

        return ans;
    }

    void inorder(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;

        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
};
*/

/*
//* optimised soln
class Solution
{
public:
    int kthSmallest(TreeNode *root, int k)
    {
        // vector<int> v;
        int ans;
        int ct = 0;
        inorder(root, k, ct, ans);

        // int ans = v[k-1];

        return ans;
    }

    void inorder(TreeNode *root, int k, int &ct, int &ans)
    {

        if (root == NULL)
            return;

        inorder(root->left, k, ct, ans);
        ct++;
        if (ct == k)
        {
            ans = root->val;
        }
        inorder(root->right, k, ct, ans);
    }
};*/
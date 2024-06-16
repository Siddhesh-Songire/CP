// 103. Binary Tree Zigzag Level Order Traversal
// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

// class Solution
// {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode *root)
//     {
//         vector<vector<int>> ans;

//         if (root == NULL)
//         {
//             return ans;
//         }

//         queue<TreeNode *> q;
//         q.push(root);
//         int ct = 0;

//         while (!q.empty())
//         {

//             vector<int> v;
//             int n = q.size();
//             for (int i = 0; i < n; i++)
//             {
//                 TreeNode *x = q.front();
//                 v.push_back(x->val);
//                 if (x->left != NULL)
//                     q.push(x->left);
//                 if (x->right != NULL)
//                     q.push(x->right);

//                 q.pop();
//             }

//             ct++;

//             if (ct % 2 == 0)
//             {
//                 reverse(v.begin(), v.end());
//                 ans.push_back(v);
//             }
//             else
//                 ans.push_back(v);
//         }
//         return ans;
//     }
// };
//* Left View of Binary Tree https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1?company%5B%5D=Amazon&company%5B%5D=Amazon&problemType=functional&page=1&sortBy=submissions&query=company%5B%5DAmazonproblemTypefunctionalpage1sortBysubmissionscompany%5B%5DAmazon
/*
vector<int> leftView(Node *root)
{
   vector<int> ans;
   if(root == NULL) return ans;

//   queue<pair<Node*,int>> q;
   queue<Node*> q;
   q.push(root);

   while(!q.empty()){
      int a  = q.size();
      for(int i=0;i<a;i++){
           Node* curr = q.front();
           q.pop();
           if(i==0)  ans.push_back(curr->data);
           if(curr->left) q.push(curr->left);
           if(curr->right) q.push(curr->right);}
   }
   return ans;

}
*/

//* Right View of Binary Tree https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1
/*
class Solution
{
public:
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
        vector<int> ans;
        if (root == NULL)
            return ans;

        //   queue<pair<Node*,int>> q;
        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            int a = q.size();
            for (int i = 0; i < a; i++)
            {
                Node *curr = q.front();
                q.pop();
                if (i == (a - 1))
                    ans.push_back(curr->data);
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
        }
        return ans;
    }
};
*/
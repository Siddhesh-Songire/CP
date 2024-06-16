/*
//* https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if(root == NULL) return ans;
        queue<pair<Node*, int>> q;
        q.push({root,0});
        
        map<int, int> mp;
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            
            Node* node = it.first;
            int x = it.second;
            mp[x] = node->data;
            
            if(node->left) q.push({node->left, x-1});
           if(node->right != NULL) q.push({node->right, x+1});

            
        }
        
        for(auto it : mp){
            ans.push_back(it.second);
        }
        
        return ans;
        
    }
};
}*/
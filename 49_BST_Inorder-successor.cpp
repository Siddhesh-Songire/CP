//* Given a BST, and a reference to a Node x in the BST. Find the Inorder Successor of the given node in the BST.

//!  Time Complexity: O(Height of the BST).
//!  Auxiliary Space: O(1).

/*
class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        Node* suc = NULL;
        while(root != NULL){
            if(root->data <= x->data){
                root = root->right;
            }
            else{
                 suc = root;
                 root = root->left;
            }
        }
        return suc;
        
    }
};
*/



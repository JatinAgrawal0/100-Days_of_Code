//GFG POTD--------------------------------------30/07/2023

/*The structure of Node

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution{
   vector<Node*> ans;
  private:
    void inorder(Node*root){
        if(!root) return;
        inorder(root->left);
        ans.push_back(root);
        inorder(root->right);
    }
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        
        if(!root || ! x) return nullptr;
        inorder(root);
        for(size_t i =0;i<ans.size()-1;i++){
            if(ans[i]== x) return ans[i+1];
        }
        return NULL;
    }
};

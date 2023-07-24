//GFG POTD------------------------24/07/2023

/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
     void recursion(Node*root, int level, vector<int>& res)
    {
        if(root == NULL) return;
        
        // if at a new level we visit first time add node data to array
        if(res.size() == level) res.push_back(root->data);
        
        recursion(root->right, level+1 , res); // move to next level ie. children
        recursion(root->left, level+1 , res);
        
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
        vector<int> res;
       recursion(root, 0, res);
       return res;
    }
};

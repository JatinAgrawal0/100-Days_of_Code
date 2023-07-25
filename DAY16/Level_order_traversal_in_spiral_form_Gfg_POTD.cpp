//LEETCODE POTD-----------------------------------25/07/2023



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


//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int>v;
    queue<Node *> q;
    q.push(root);
    int check=0;
    while(!q.empty()){
        int count=q.size();
        vector<int> w;
        for(int i=0;i<count;i++){
            Node * cur=q.front();
            q.pop();
            w.push_back(cur->data);
            if(cur->left!=NULL)
            q.push(cur->left);
            if(cur->right!=NULL)
            q.push(cur->right);
        }
        if(check%2==0)
        {
            reverse(w.begin(),w.end());
            v.insert(v.end(),w.begin(),w.end());
        }
        else
         v.insert(v.end(),w.begin(),w.end());
         check=check+1;
    }
    return v;
}

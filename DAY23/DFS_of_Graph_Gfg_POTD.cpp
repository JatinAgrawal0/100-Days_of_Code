//GFG POTD-----------------------------------01/08/2023


class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(vector<int>&vis,int node,vector<int>adj[],vector<int>&res){
        vis[node]=1;
        res.push_back(node);
        for(auto child:adj[node]){
            if(!vis[child]){
                dfs(vis,child,adj,res);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>res;
        vector<int>vis(V,0);
        dfs(vis,0,adj,res);
        return res;
    }
};

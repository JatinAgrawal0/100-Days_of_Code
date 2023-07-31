//GFG POTD----------------------------------------31/07/2023

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
         vector<bool> visited(V+1);
        
        vector<int> ans;
        
        queue<int> to_visit;
        to_visit.push(0);
        
        while(!to_visit.empty()){
            
            int node=to_visit.front();
            to_visit.pop();
            
            
            visited[node]=true;
            
            ans.push_back(node);
            
            for(const auto &nod : adj[node]){
                if(!visited[nod]){
                    to_visit.push(nod);
                    visited[nod] =true;
                }
            }
            
        }
        
        
        return ans;
    }
};

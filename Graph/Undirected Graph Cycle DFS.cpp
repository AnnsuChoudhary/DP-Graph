class Solution {
  public:
    
    bool dfs(int start, vector<bool>& visited, int parent, vector<vector<int>>& adj){
        
        visited[start] = true;
        
        for(int i: adj[start]){
            
            if(!visited[i]){
                
                if(dfs(i, visited, start, adj))
                return true;
            }
            
            else if(i != parent)
            return true;
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        
        for(int i=0; i<edges.size(); i++){
            
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> visited(V, false);
        
        for(int i=0; i<V; i++){
            
            if(!visited[i]){
                
                if(dfs(i, visited, -1, adj))
                return true;
            }
        }
        
        return false;
        
        
        
        
    }
};
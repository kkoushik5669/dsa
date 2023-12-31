//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    bool dfs(int src,vector<int>&vis,vector<int>&pathvis,vector<int>adj[])
    {
        pathvis[src]=1;
        vis[src]=1;
        for(auto it:adj[src])
        {
            if(!vis[it])
            {
                if(dfs(it,vis,pathvis,adj)){return true;}
            }
            if(pathvis[it])
            {
                return true;
            }
        }
        pathvis[src]=0;
        return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        vector<int>pathvis(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,vis,pathvis,adj)){return true;}
            }
        }
    return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends
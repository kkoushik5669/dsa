//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {

private:
    bool dfs(vector<int>&color,int col,vector<int>adj[],int i)
    {
        color[i]=col;
        for(auto it:adj[i])
        {
            if(color[it]==color[i])
            {
                return false;
            }
            if(color[it]==-1 and dfs(color,!col,adj,it)==false)
            {
                return false;
            }
        }
        return true;
    }
public:
	bool isBipartite(int V, vector<int>adj[]){
       vector<int>color(V,-1);
       for(int i=0;i<V;i++)
       {
           if(color[i]==-1)
           {
               if(dfs(color,1,adj,i)==false){return false;}
           }
       }
       return true;
	}
	

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends
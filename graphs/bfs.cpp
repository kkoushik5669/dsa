vector<ll> bfsOfGraph(ll V, vector<ll> adj[]) {
        ll vis[V] = {0}; 
        vis[0] = 1; 
        queue<ll> q;
        // push the initial starting node 
        q.push(0); 
        vector<ll> bfs; 
        // iterate till the queue is empty 
        while(!q.empty()) {
           // get the topmost element in the queue 
            ll node = q.front(); 
            q.pop(); 
            bfs.push_back(node); 
            // traverse for all its neighbours 
            for(auto it : adj[node]) {
                // if the neighbour has previously not been visited, 
                // store in Q and mark as visited 
                if(!vis[it]) {
                    vis[it] = 1; 
                    q.push(it); 
                }
            }
        }
        return bfs; 
    }

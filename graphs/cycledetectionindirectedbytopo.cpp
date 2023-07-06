 bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> v(V,0);
        for(int i=0;i<V;i++){
            for(auto e:adj[i]){
                v[e]++;
            }
        }
        queue<int> q;
        for(int i=0;i<V;i++){
            if(v[i]==0) q.push(i);
        }
        int c =0;
        while(!q.empty()){
            auto e = q.front();
            q.pop();
            c++;
            for(auto a:adj[e]){
                v[a]--;
                if(v[a]<0) return true;
                if(v[a]==0){
                    q.push(a);
                }
            }
        }
        if(c==V) return false;
        return true;
    }

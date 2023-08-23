/*void bfs(int node,unordered_map<int,bool> &visited,vector<int> &ans,vector<vector<int>> &adj)
{
    queue<int> q;
    q.push(node);
    visited[node]=true;
    while(!q.empty())
    {
        
        int frontn=q.front();
        ans.push_back(frontn);
        q.pop();
        
        for(auto i:adj[node])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i]=true;
            }
        }

    }
}
vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    vector<int> ans;
    unordered_map<int,bool> visited;

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            bfs(i,visited,ans,adj);
        }
    }
    return ans;
}*/
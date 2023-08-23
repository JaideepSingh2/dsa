// answer of the question
/*
void makeadj(unordered_map<int,list<int> > &adj,vector<vector<int>> &edges,int &E)
{
    for(int i=0;i<E;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void dfs(unordered_map<int,list<int> > &adj,vector<int> &component,unordered_map<int,bool> &visited,int i)
{
    component.push_back(i);
    visited[i]=true;
    for(auto m: adj[i])
    {
        if (!visited[m])
        {
          dfs(adj,component,visited,m);
        }
    }
}



vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    unordered_map<int,list<int> > adj;
    makeadj(adj,edges,E);

    vector<vector<int>> ans;
    
    unordered_map<int,bool> visited;
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        {
            vector<int> component;
            dfs(adj,component,visited,i);
            ans.push_back(component);
        }
        
    }
    return ans;

}
*/
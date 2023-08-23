/*
#include<unordered_map>
#include<list>
#include<stack>
void dfs(int node, vector<bool> &vis, unordered_map<int, list<int>> &adj,
         stack<int> &st) {
  vis[node] = true;
  for (auto nbr : adj[node]) {
    if (!vis[nbr]) {
      dfs(nbr, vis, adj, st);
    }
    
  }
  st.push(node);
}
int revdfs(int node,unordered_map<int, list<int>> &transpose,vector<bool> &vis)
{
	vis[node]=true;
	for(auto nbr:transpose[node])
	{
		if(!vis[nbr])
		{
			revdfs(nbr,transpose,vis);
		}
	}

}
int stronglyConnectedComponents(int v, vector<vector<int>> &edges) {
  unordered_map<int, list<int>> adj;
  for (int i = 0; i < edges.size(); i++) {
    int u = edges[i][0];
    int v = edges[i][1];
    adj[u].push_back(v);
  }

  stack<int> st;
  vector<bool> vis(v, false);
  for (int i = 0; i < v; i++) {
    if (!vis[i]) {
      dfs(i, vis, adj, st);
    }
  }
  unordered_map<int, list<int>> transpose;
  for (int i = 0; i < v; i++) {
    vis[i] = 0;
    for (auto nbr : adj[i]) {
      transpose[nbr].push_back(i);
    }
  }
  int count=0;
  while(!st.empty())
  {
	  int top=st.top();
	  st.pop();
	  if(!vis[top])
	  {
		  
		  revdfs(top,transpose,vis);
		  count++;
	  }


  }
  return count;
}
*/
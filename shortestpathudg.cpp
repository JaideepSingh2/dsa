/*

vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s,
                         int t) {

  vector<int> adj[n+1];
  for (int i = 0; i < m; i++) {
    int u = edges[i].first;
    int v = edges[i].second;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  
  queue<int> q;
  vector<int> visited(n+1,-1);
  vector<int> parent(n+1,-1);
  vector<int> ans;

  q.push(s);
  visited[s]=1;
  
  while (!q.empty()) {
    int front = q.front();
    q.pop();

    for (auto neighbour : adj[front]) {
      if (visited[neighbour]!=1) {
        q.push(neighbour);
        visited[neighbour]=1;
        parent[neighbour]=front;
      }
    }
  }
  int currentnode = t;
  ans.push_back(t);
  while (currentnode != s) {
    currentnode = parent[currentnode];
    ans.push_back(currentnode);
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

*/
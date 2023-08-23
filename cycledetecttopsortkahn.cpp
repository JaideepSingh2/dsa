/* directed cycle detection using kahn algorithm
#include <list>
#include <queue>
#include <unordered_map>

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges) {
  unordered_map<int, list<int>> adj;
  for (int i = 0; i < edges.size(); i++) {
    int U = edges[i].first - 1;
    int V = edges[i].second - 1;
    adj[U].push_back(V);
  }
  int cnt=0;
  vector<int> indegree(n);
  queue<int> q;

  for (auto i : adj) {
    for (auto j : i.second) {
      indegree[j]++;
    }
  }
  for (int i = 0; i < n; i++) {
    if (indegree[i] == 0) {
      q.push(i);
    }
  }
  while (!q.empty()) {
    int front = q.front();
    q.pop();
    cnt++;

    for (auto neighbour : adj[front]) {
      indegree[neighbour]--;
      if (indegree[neighbour] == 0) {
        q.push(neighbour);
      }
    }
  }
  if (cnt == n) {
    return false;
  } else {
    return true;
  }
}

*/
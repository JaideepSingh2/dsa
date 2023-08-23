/*
#include <bits/stdc++.h>
#include <queue>
#include <unordered_map>

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e) {
  unordered_map<int, list<int>> adj;
  for (int i = 0; i < e; i++) {
    int U = edges[i][0];
    int V = edges[i][1];
    adj[U].push_back(V);
  }
  vector<int> ans;
  vector<int> indegree(v);
  queue<int> q;

  for (auto i : adj) {
    for (auto j : i.second) {
      indegree[j]++;
    }
  }
  for (int i = 0; i < v; i++) {
    if (indegree[i] == 0) {
      q.push(i);
    }
  }
  while (!q.empty()) {
    int front = q.front();
    q.pop();
    ans.push_back(front);
    for (auto neighbour : adj[front]) {
      indegree[neighbour]--;
      if (indegree[neighbour] == 0) {
        q.push(neighbour);
      }
    }
  }
  return ans;
}
*/
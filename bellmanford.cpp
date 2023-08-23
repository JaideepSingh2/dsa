/*
#include <limits.h>
vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {
  vector<int> dist(n + 1, 1e8);
  dist[src] = 0;
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int u = edges[j][0];
      int v = edges[j][1];
      int wt = edges[j][2];
      if (dist[u] != 1e8 && (dist[v] > (dist[u] + wt))) {
        dist[v] = dist[u] + wt;
      }
    }
  }
  bool flag=false;
  for (int j = 0; j < m; j++) {
      int u = edges[j][0];
      int v = edges[j][1];
      int wt = edges[j][2];
      if (dist[u] != 1e8 && (dist[v] > (dist[u] + wt))) {
        flag =true;
      }
    }
    vector<int> dis(n + 1, 1e8);

  if(!flag)
  {
      return dist;
  }
  return dis;
}
*/
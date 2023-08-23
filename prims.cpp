// #include <bits/stdc++.h>
// #include <limits.h>
// #include <list>
// #include <unordered_map>


// vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g) {
//   unordered_map<int, list<pair<int, int>>> adj;
//   for (int i = 0; i < g.size(); i++) {
//     int u = g[i].first.first;
//     int v = g[i].first.second;
//     int w = g[i].second;
//     adj[u].push_back(make_pair(v, w));
//     adj[v].push_back(make_pair(u, w));
//   }
//   vector<int> mst(n + 1);
//   vector<int> key(n + 1);
//   vector<int> parent(n + 1);

//   for (int i = 0; i <n+1; i++) {
//     mst[i] = 0;
//     parent[i] = -1;
//     key[i] = INT_MAX;
//   }
//   key[1] = 0;
//   for (int i = 1; i <= n; i++) {
//     int u;
//     int mini = INT_MAX;

//     for (int v = 1; v <= n; v++) {
//       if (mst[v] == 0 && key[v] < mini) {
//         u = v;
//         mini = key[v];
//       }
//     }
//     mst[u] = 1;

//     for (auto neighbour : adj[u]) {
//       int v = neighbour.first;
//       int w = neighbour.second;

//       if (mst[v] == 0 && w < key[v]) {
//         key[v] = w;
//         parent[v] = u;
//       }
//     }
//   }
//   vector<pair<pair<int, int>, int>> result;
//   for (int i = 2; i <=n; i++) {
//     result.push_back({{parent[i], i}, key[i]});
//   }
//   return result;
// }

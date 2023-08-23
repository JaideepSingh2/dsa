/*
#include<unordered_map>
#include<set>
#include<list>
#include<queue>
using namespace std;
bool iscycle(unordered_map<int,set<int>> &adj,int node,unordered_map<int,bool> &visited)
{
     queue<int> q;
    q.push(node);
    visited[node]=true;
    unordered_map<int,int> parent;
    while(!q.empty())
    {
        
        int frontn=q.front();
       
        q.pop();
        
        for(auto i:adj[frontn])
        {
            if(visited[i]==true && i!=parent[frontn])
            {
                return true;
            }
            else if(!visited[i])
            {
                q.push(i);
                visited[i]=true;
                parent[i]=frontn;
            }
        }

    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
     unordered_map<int,set<int>> adj;
//adjacency list
     for(int i=0; i<m;i++)
     {
         int u=edges[i][0];
         int v=edges[i][1];
         adj[u].insert(v);
         adj[v].insert(u);
     }

     unordered_map<int,bool> visited;
      bool ans;
     for(int i=0;i<n;i++)
     {
         if(!visited[i])
         {
            ans=iscycle(adj,i,visited);
           
         }
          if(ans==1)
            {
                return "Yes";
            }
     }
     return "No";

}

*/
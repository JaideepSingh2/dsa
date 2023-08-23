/*
#include<unordered_map>
#include<set>
#include<list>
#include <bits/stdc++.h> 

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    unordered_map<int, list<pair<int,int>> > adj;
    for(int i=0;i<edges;i++)
    {
        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int> dist(vertices);
    set<pair<int,int> > st;
    for(int i=0;i<vertices;i++)
    {
        dist[i]=INT_MAX;
    }
    dist[source]=0;
    st.insert(make_pair(0,source));

    while(!st.empty())
    {
        auto top=*(st.begin());
        st.erase(st.begin());
        int nodedist=top.first;
        int node=top.second;

        for(auto neighbour:adj[node])
        {
            if(dist[neighbour.first]>neighbour.second+nodedist)
            {
                auto record=st.find(make_pair(dist[neighbour.first],neighbour.first));
                if(record!=st.end())
                {
                    st.erase(record);
                }
                dist[neighbour.first]=neighbour.second+nodedist;
                st.insert(make_pair(dist[neighbour.first],neighbour.first));
            }

        }
    }
    return dist;
    
}

*/
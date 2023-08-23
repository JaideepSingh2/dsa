// void makeset(vector<int> &parent,vector<int> &rank,int n)
// {
// 	for(int i=0;i<n;i++)
// 	{
// 		parent[i]=i;
// 		rank[i]=0;
// 	}
// }
// int findparent(vector<int> &parent,int node)
// {
// 	if(parent[node]==node)
// 	{
// 		return node;
// 	}
// 	return parent[node]=findparent(parent,parent[node]);
// }
// void unionset(int &u,int &v,vector<int> &parent,vector<int> rank)
// {
// 	int up=findparent(parent, u);
// 	int vp=findparent(parent, v);
// 	if(rank[up]>rank[vp])
// 	{
// 		parent[vp]=up;
		
// 	}
// 	else if(rank[up]<rank[vp])
// 	{
// 		parent[up]=vp;
// 	}
// 	else
// 	{
// 		parent[vp]=up;
// 		rank[up]++;
// 	}
	
// }
// bool cmp(vector<int> a, vector<int> b)
// {
// 	if(a[2]<b[2])
// 	{
// 		return true;
// 	}
// 	else{
// 		return false;
// 	}

// }
// int kruskalMST(int n, vector<vector<int>> &edges)
// {
// 	vector<int> parent(n);
// 	vector<int> rank(n);
// 	makeset(parent,rank,n);
// int minweight=0;
// 	sort(edges.begin(),edges.end(),cmp);
// 	for(int i=0;i<edges.size();i++)
// 	{
// 		int u=findparent(parent, edges[i][0]);
// 		int v=findparent(parent,edges[i][1]);
// 		if(u!=v)
// 		{
// 			unionset(edges[i][0],edges[i][1],parent,rank);
// 			minweight=minweight+edges[i][2];
// 		}
// 	}
// 	return minweight;
// }

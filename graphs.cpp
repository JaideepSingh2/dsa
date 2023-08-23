#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph
{
    public:
     unordered_map <int,list<int> > adj;
     void addedge(int u, int v, bool direction)
     {
        //0 for undirected graph,1 for directed one
        adj[u].push_back(v);

        if(direction==0)
        {
            adj[v].push_back(u);
        }

     }
     void printadj()
     {
        for(auto i:adj)
        {
            cout<<i.first<<" -> ";
            for(auto j:i.second)
            {
                cout<<j<<",";
            }
            cout<<endl;
        }
     }
};


int main()
{
    int n;
    cout<<"Please enter no. of edges : ";
    cin>>n;
    
    graph g;
    for(int i=0;i<n;i++)
    {
        int u,v,d;
        cout<<"Please enter node 1 and node 2: ";
        cin>>u>>v;
        cout<<endl;
        cout<<"Please enter whether node is directed(1) or undirected(0) :";
        cin>>d;
        cout<<endl;
        g.addedge(u,v,d);
    }
    cout<<"Printing : "<<endl;
    g.printadj();
}
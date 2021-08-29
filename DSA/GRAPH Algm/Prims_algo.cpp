
//PRIMS ALGO FOR MINIMUM SPANNING TREE

#include<iostream>
#include<list>
#include<climits>
using namespace std;

class Graph{
 public:
    int v;
    list<pair<int,int>>*adj;

    Graph(int v)
    {
        this->v=v;
     adj=new list<pair<int,int>>[v];
    }
    void addEdge(int u,int v,int w)
    {
       adj[u].push(make_pair(v,w));
       adj[v].push(make_pair(u,w));

    }

    void find_minvertex(int *weight,bool *visited,int v)
    {
      int minvertex=-1;
      for(int i=0;i<v;i++)
      {
          if(!visited[i] && (minvertex=-1 || weight[i]<weight[minvertex]))
          {
              minvertex=i;
          }
      }
      return minvertex;  //returning vertex which has minm weight among all vertex and also not visited

    }

    void prims()
    {
      bool *visited=new bool(true);
      int *parent=new int(v);
      int *weight=new int(w);
      for(int i=0;i<v;i++)
      {
          visited[i]=false;
          weight[i]=INT_MAX;
      }
      parent[0]=-1;
      weight[0]=0;
      for(int i=0;i<v;i++)
      {
        int minvertex=find_minvertex(weight,visited,v);
        visited[minvertex]=true;//the minmm weight vetex selected get marked visited
        for(auto neighbour:adj[minvertex])
        {
            if(!visited[neighbour.first])
            {
              if(weight[neighbour.first]>neighbour.second)
              {
                  parent[neighbour.first]=minvertex;
                  weight[neighbour.first]=neighbour.second;
              }

            }

        }

      }
      for(int i=0;i<v;i++)
      {
          cout<<i<<"->"<<parent[i]<<"weight"<<weight[i]<<endl;
      }

    }
};
int main()
{
    int n,e;
    cin>>n>>e;
    Graph(n);
    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        g.addEdge(u,v,w);

    }
    prim();
    return 0;
}


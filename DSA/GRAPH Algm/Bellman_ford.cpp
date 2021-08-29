
//BELLMAN FORD ALGORITHM

#include<iostream>
#include<climits>
using namespace std;


class Edge
{
    public:
    int src,destn,weight;
};

class Graph{
    public:
int v,e;
Edge* edge;

Graph(int v,int e)
{

    this->v=v;
    this->e=e;
    edge=new Edge[e];
}

void addEdge(int u,int v,int w,int count)
{
   edge[count].src=u;
   edge[count].destn=v;
   edge[count].weight=w;
}

void bellmanford(int src)
{

   int distance[v];
    for(int i=0;i<v;i++)
    {
       if(i!=src){distance[i]=INT_MAX;}
       else{distance[i]=0;}

    }
    //relaxation code
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<e;j++)
        {

            int src=edge[j].src;
            int dest=edge[j].destn;
            int wt=edge[j].weight;

            if(distance[dest]!=INT_MAX&&distance[dest]>distance[src]+wt )
        {
            distance[dest]=distance[src]+wt;

        }

        }

    }

    //negative weight cycle check
         for(int j=0;j<e;j++)
        {

            int src=edge[j].src;
            int dest=edge[j].destn;
            int wt=edge[j].weight;

            if(distance[dest]!=INT_MAX&&distance[dest]>distance[src]+wt )
        {
            cout<<"negative weight cycle";
            return;
        }
        }

    //print
    for(int i=0;i<v;i++)
    {
        cout<<i<<"->"<<distance[i]<<endl;
    }
}

};

int main()
{
    int v,e;
    cin>>v>>e;
    Graph g(v,e);
    for(int i=0;i<e;i++)
    {

        int u,v,w;
        g.addEdge(u,v,w,i);
    }
    g.bellmanford(0);

    return 0;
}


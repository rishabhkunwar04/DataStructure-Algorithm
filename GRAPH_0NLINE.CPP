
//IMPLEMENTATION OF A GRAPH OF VERTEX AS INTEGER

/*#include<iostream>
#include<list>
using namespace std;

class graph{
    int v;
    list<int>*adjlist;
    public:
    graph(int V)
    {
        v=V;
       adjlist=new list<int>[v];
    }
    void addEdge(int u,int v, bool bidir=true)
    {

        adjlist[u].push_back(v);
        if(bidir)
        {

            adjlist[v].push_back(u);
        }
    }
    void print()
    {

        for(int i=0;i<v;i++)
        {
            cout<<i<<" -->";
            for(auto node:adjlist[i])
            {

                cout<<node<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(0,4);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,3);
    g.addEdge(3,4);

    g.print();
    return 0;
}
 // IMPLEMENTATION Of  GRAPH HAVING VERTEX AS STRING TYPE OR ANY other data type

 #include<iostream>
#include<list>
#include<map>
#include<queue>
#include<climits>
#include<stack>


using namespace std;

template<typename T>
class graph
{
	map<T,list<T> >adjlist;

public:

	void addEdge(T u,T v,bool birdir=true)
	{
		adjlist[u].push_back(v);
		if(birdir)
		{
			adjlist[v].push_back(u);
		}
	}

	void print()
	{
		for(auto node:adjlist)
		{
			cout<<node.first<<"-->";
			for(auto children:node.second)
			{
				cout<<children<<" ";
			}
			cout<<endl;
		}
	}

	//BFS TRAVERSAL

	void bfs(T src)
	{
		queue<T>q;
		map<T,bool>visited;
		q.push(src);
		visited[src]=true;

		while(!q.empty())
		{
			T top=q.front();
			q.pop();
			cout<<top<<" ";
			for(auto child:adjlist[top])
			{
				if(!visited[child])
				{
					q.push(child);
					visited[child]=true;
				}
			}
		}

	}
	//SHORTEST PATH DISTANCE  from SOURCE

	void SSP(T src)
	{

	    map<T,int>dist;
	    queue<T>q;
	    for(auto index:adjlist)
        {
            dist[index.first]=INT_MAX;
        }
        q.push(src);
        dist[src]=0;
        while(!q.empty())
        {

            T top=q.front();
            q.pop();
            for(auto node:adjlist[top])
            {

                if(dist[node]==INT_MAX)
                {

                    dist[node]=dist[top]+1;
                    q.push(node);
                }
            }
        }
        for(auto node:dist)
        {

            cout<<node.first<<" -->"<<node.second<<endl;
        }


	}
	//DFS TRAVERSAL

	void dfs_help(T node,map<T,bool>&visited)
	{
	    visited[node]=true;
	    cout<<node<<" ";
	    for(T neighbour:adjlist[node])
        {
          if(!visited[neighbour])
          {
              dfs_help(neighbour,visited);
          }

        }


	}

	void DFS(T src)
	{
	   map<T,bool>visited;
	   dfs_help(src,visited);
	   // IF FOREST OR EXTRA BRANCH EXIST
	   cout<<endl;

        int component=1;

	   for(auto i:adjlist)
       {

           T city=i.first;
           if(!visited[city])
           {
               dfs_help(city,visited);
               component++;
           }
       }

	}
	bool iscyclic_bfs(T src)
	{

	    map<T,int>parent;
	    map<T,bool>visited;
	    queue<T>q;

	    q.push(src);
	    visited[src]=true;
	    parent[src]=src;

	    while(!q.empty())
        {

            T top=q.front();
            q.pop();
            for(auto child:adjlist[top])
            {
                if(visited[child]==true && parent[top]!=child)
                {

                    return true;
                }
                else if(visited[child]!=true)
                {

                    visited[child]=true;
                    q.push(child);
                    parent[child]=top;

                }
            }
        }
        return false;
	}


	//CYCLE DETECTION DFS


	bool iscyclic_helper_dfs( T node,map<T,bool>&visited,map<T,bool>&instack)
	{
	   visited[node]=true;
	   instack[node]=true;
	    for(T neighbour:adjlist[node])
        {

            if(!visited[neighbour]&&iscyclic_helper_dfs(node,visited,instack)|| instack[neighbour])
            {
                return true;
            }
        }
        instack[node]=false;
        return false;

	}

	bool iscyclic_dfs(T src)
	{
	   map<T,bool>visited;
	   map<T,bool>instack;

        for(auto i:adjlist)
        {
            T node=i.first;
            if(!visited[node])
            {
               bool cyclepresent=iscyclic_helper_dfs(node,visited,instack);
               if(cyclepresent)
               {

                   return true;
               }

            }
        }

	}




};

int main()
{

	// graph<string>g;

	graph<int>g;
	// g.addEdge("modi","yogi",false);
	// g.addEdge("modi","trump",false);
	// g.addEdge("prabhu","modi",false);
	// g.addEdge("trump","modi",false);
	// g.addEdge("yogi","modi",false);
	// g.addEdge("yogi","prabhu",false);
	// g.addEdge("putin","trump",false);
	// g.addEdge("putin","modi",false);
	// g.addEdge("putin","pope");

	g.addEdge(0,1);
	g.addEdge(0,4);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(2,4);
	g.addEdge(3,4);
	g.addEdge(3,5);
	//forest
	//g.addEdge(8,9);
	//g.addEdge(9,10);
	// g.print();
	//g.bfs(0);
	//g.SSP(0);
	//g.DFS(0);
	if(g.iscyclic_bfs(0))
    {
        cout<<"cyclic";
    }
    else
        cout<<"notcyclic";
	cout<<endl;
	return 0;
}*/

/*
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

*/
/*
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
      return minvertex;

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
        visited[minvertex]=true;
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
*/

//KRUSKALS ALGO


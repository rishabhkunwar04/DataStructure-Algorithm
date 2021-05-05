
//ADJACENCY MATRIX IMPLEMENTATION****
#include<iostream>

    using namespace std;

    bool A[10][10];

    void initialize()
    {
        for(int i = 0;i < 10;++i)
            for(int j = 0;j < 10;++j)
                A[i][j] = false;
    }

    int main()
    {
        int x, y, nodes, edges;
        initialize();       //Since there is no edge initially
        cin >> nodes;       //Number of nodes
        cin >> edges;       //Number of edges
        for(int i = 0;i < edges;++i)
        {
            cin >> x >> y;
            A[x][y] = true;     //Mark the edges from vertex x to vertex y
       }
       if(A[3][4] == true)
          cout << “There is an edge between 3 and 4” << endl;
      else 
          cout << “There is no edge between 3 and 4” << endl;

      if(A[2][3] == true)
          cout << “There is an edge between 2 and 3” << endl;
      else 
          cout << “There is no edge between 2 and 3” << endl;

      return 0;
    }

//*** ADJACENCY LIST REPRESENTATION
     #include<iostream >
     #include < vector >

    using namespace std;

    vector <int> adj[10];

    int main()
    {
        int x, y, nodes, edges;
        cin >> nodes;       //Number of nodes
        cin >> edges;       //Number of edges
        for(int i = 0;i < edges;++i)
        {
                cin >> x >> y;
            adj[x].push_back(y);        //Insert y in adjacency list of x
         }
    for(int i = 1;i <= nodes;++i)
    {   
            cout << "Adjacency list of node " << i << ": ";
        for(int j = 0;j < adj[i].size();++j)
            {
            if(j == adj[i].size() - 1)
                    cout << adj[i][j] << endl;
            else
                cout << adj[i][j] << " --> ";
    }
    }
    return 0;
    }





//IMPLEMENTATION OF A GRAPH OF VERTES AS INTEGER by ADJACENCY LIST

#include<iostream>
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


 // IMPLEMENTATION Of  GRAPH HAVING VERTEX AS STRING TYPE OR ANY other data type BY ADJACENCY LIST MEATHOD

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
           cout<<endl;


	   // IF FOREST OR EXTRA BRANCH EXIST
     //for finding connected component using dfs

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
       cout<<"this graph has"<<component<<"components";

	} 
   //CYCLE DETECTION BFS

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
}


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


//**** DIJKSTRA ALGORITHM

// Program to find Dijkstra's shortest path using
// priority_queue in STL
#include<bits/stdc++.h>
using namespace std;
# define INF 0x3f3f3f3f
  
// iPair ==>  Integer Pair
typedef pair<int, int> iPair;
  
// This class represents a directed graph using
// adjacency list representation
class Graph
{
    int V;    // No. of vertices
  
    // In a weighted graph, we need to store vertex
    // and weight pair for every edge
    list< pair<int, int> > *adj;
  
public:
    Graph(int V);  // Constructor
  
    // function to add an edge to graph
    void addEdge(int u, int v, int w);
  
    // prints shortest path from s
    void shortestPath(int s);
};
  
// Allocates memory for adjacency list
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<iPair> [V];
}
  
void Graph::addEdge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
}
  
// Prints shortest paths from src to all other vertices
void Graph::shortestPath(int src)
{
    // Create a priority queue to store vertices that
    // are being preprocessed. This is weird syntax in C++.
    // Refer below link for details of this syntax
    // https://www.geeksforgeeks.org/implement-min-heap-using-stl/
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
  
    // Create a vector for distances and initialize all
    // distances as infinite (INF)
    vector<int> dist(V, INF);
  
    // Insert source itself in priority queue and initialize
    // its distance as 0.
    pq.push(make_pair(0, src));
    dist[src] = 0;
  
    /* Looping till priority queue becomes empty (or all
      distances are not finalized) */
    while (!pq.empty())
    {
        // The first vertex in pair is the minimum distance
        // vertex, extract it from priority queue.
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)
        int u = pq.top().second;
        pq.pop();
  
        // 'i' is used to get all adjacent vertices of a vertex
        list< pair<int, int> >::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = (*i).first;
            int weight = (*i).second;
  
            //  If there is shorted path to v through u.
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
  
    // Print shortest distances stored in dist[]
    printf("Vertex   Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
}
  
// Driver program to test methods of graph class
int main()
{
    // create the graph given in above fugure
    int V = 9;
    Graph g(V);
  
    //  making above shown graph
    g.addEdge(0, 1, 4);
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);
  
    g.shortestPath(0);
  
    return 0;
}


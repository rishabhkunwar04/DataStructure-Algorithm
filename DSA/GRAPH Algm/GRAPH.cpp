
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
}*/
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
	g.addEdge(8,9);
	g.addEdge(9,10);
	// g.print();
	//g.bfs(0);
	//g.SSP(0);
	g.DFS(0);
	cout<<endl;
	return 0;
}







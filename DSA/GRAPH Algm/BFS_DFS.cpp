
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
      //bidir is true for undirected graph and false for directed graph

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
   //BFS CYCLE DETECTION //UNDIRECTED GRAPH

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

  // DFS CYCLE DETECTION // UNDIRECTED GRAPH

  #include<bits/stdc++.h>
using namespace std;

 // o- based indexing code


class Solution {

public:
    bool checkForCycle(int node, int parent, vector<int> &vis, vector<int> adj[]) {
        vis[node] = 1; 
        for(auto it: adj[node]) {
            if(!vis[it]) {
                if(checkForCycle(it, node, vis, adj)) 
                    return true; 
            }
            else if(it!=parent) 
                return true; 
        }
        
        return false; 
    }
public:
  bool isCycle(int V, vector<int>adj[]){
      vector<int> vis(V+1, 0); 
      for(int i = 0;i<V;i++) {
          if(!vis[i]) {
              if(checkForCycle(i, -1, vis, adj)) return true; 
          }
      }
      
      return false; 
  }
};


int main(){
  int tc;
  cin >> tc;
  while(tc--){
    int V, E;
    cin >> V >> E;
    vector<int>adj[V];
    for(int i = 0; i < E; i++){
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    Solution obj;
    bool ans = obj.isCycle(V, adj);
    if(ans)
      cout << "1\n";
    else cout << "0\n";
  }
  return 0;
} 

//BFS CYCLE DETECTION // DIRECTED GRAPH //khans algo concept used

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isCyclic(int N, vector<int> adj[]) {
        queue<int> q; 
      vector<int> indegree(N, 0); 
      for(int i = 0;i<N;i++) {
          for(auto it: adj[i]) {
              indegree[it]++; 
          }
      }
      
      for(int i = 0;i<N;i++) {
          if(indegree[i] == 0) {
              q.push(i); 
          }
      }
      int cnt = 0;
      while(!q.empty()) {
          int node = q.front(); 
          q.pop(); 
          cnt++; 
          for(auto it : adj[node]) {
              indegree[it]--;
              if(indegree[it] == 0) {
                  q.push(it); 
              }
          }
      }
      if(cnt == N) return false; 
      return true; 
  }
};



int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
      int V, E;
      cin >> V >> E;

      vector<int> adj[V];

      for(int i = 0; i < E; i++)
      {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
      }

      Solution obj;
      cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}


	  //DFS CYCLE DETECTION// DIRECTED GRAPH  


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


//DFS CYCLE DETECTION //DIRECTED GRAPH //Striver graph series

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool checkCycle(int node, vector<int> adj[], int vis[], int dfsVis[]) {
        vis[node] = 1; 
        dfsVis[node] = 1; 
        for(auto it : adj[node]) {
            if(!vis[it]) {
                if(checkCycle(it, adj, vis, dfsVis)) return true;
            } else if(dfsVis[it]) {
                return true; 
            }
        }
        dfsVis[node] = 0; 
        return false;
    }
public:
  bool isCyclic(int N, vector<int> adj[]) {
     int vis[N], dfsVis[N]; 
     memset(vis, 0, sizeof vis); 
     memset(dfsVis, 0, sizeof dfsVis); 
     
     for(int i = 0;i<N;i++) {
         if(!vis[i]) {
             // cout << i << endl; 
             if(checkCycle(i, adj, vis, dfsVis)) {
                 return true; 
             }
         }
     }
     return false; 
  }
};

int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
      int V, E;
      cin >> V >> E;

      vector<int> adj[V];

      for(int i = 0; i < E; i++)
      {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
      }

      Solution obj;
      cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}



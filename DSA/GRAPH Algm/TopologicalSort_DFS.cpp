#include<bits/stdc++.h>
#include<list>
#include<map>

using namespace std;


template<typename T>
class graph{
     map<T,list<T>>adjlist;

     public:
     	void addedge(T u,T v)
     	{
         adjlist[u].push_back(v);
     	}


 void helper_funcn(T node,map<T,bool>&visited,list<T>&order)
{
	visited[node]=true;

    for(T i:adjlist[node])
    {
    	if(!visited[i])
    	{
    		helper_funcn(i,visited,order);
    	}
    }

    //adding node at front in linkedlist 
    //at this point all the children of the node has been visited 
	//so adding that node to the list
    order.push_front(node);
}

void topological_sort()
{
	map<T,bool>visited;
	list<T>order;
	for(auto i:adjlist)
	{   
	    //i is a pair(node,listofnode)
		T node=i.first;
		if(!visited[node])
		{
			helper_funcn(node,visited,order);
		}
	}
	//printing linkedlist

	for(T x:order)
	{
		cout<<x<<"-->";
	}

}
	
};


int main()
{
	graph<string>g;
	g.addedge("logic","html");
	g.addedge("logic","css");
	g.addedge("html","webdevlopment");
	g.addedge("css","webdevlopment");

	g.topological_sort();

	return 0;
}

//striver Topological sort
#include <bits/stdc++.h>
using namespace std;

class Solution{
    void findTopoSort(int node, vector<int> &vis, stack<int> &st, vector<int> adj[]) {
        vis[node] = 1; 
        
        for(auto it : adj[node]) {
            if(!vis[it]) {
                findTopoSort(it, vis, st, adj); 
            }
        }
        st.push(node); 
    }
	public:
	vector<int> topoSort(int N, vector<int> adj[]) {
	    stack<int> st; 
	    vector<int> vis(N, 0); 
	    for(int i = 0;i<N;i++) {
	        if(vis[i] == 0) {
	            findTopoSort(i, vis, st, adj); 
	        }
	    }
	    vector<int> topo;
	    while(!st.empty()) {
	        topo.push_back(st.top()); 
	        st.pop(); 
	    }
	    return topo; 
	    
	}
};
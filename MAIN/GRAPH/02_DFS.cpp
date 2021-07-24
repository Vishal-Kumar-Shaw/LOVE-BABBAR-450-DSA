// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	void solve(vector<int> g[], int V, int start, vector<int>&v, bool vis[]){
	    v.push_back(start);
	    vis[start] =true;
	    for( auto x : g[start]){
	        if(!vis[x])
	            solve(g,V,x,v,vis);
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector<int> v;
	    bool vis[V];
	    int  start =0;
	    for(int i=0;i<V;i++) vis[i] = false; 
	    solve(adj,V,start,v,vis);
	    return v;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.dfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
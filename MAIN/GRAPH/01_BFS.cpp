// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    int i;
	    queue<int> q;
	    vector<int>v;
	    bool vis[V];
	    for(i=0;i<V;i++) vis[i]=false;
	    q.push(0);
	    vis[0]=true;
	    
	    while(!q.empty()){
	        int temp=q.front();
	        q.pop();
	        v.push_back(temp);
	        for(i=0;i<adj[temp].size();i++){
	            if(!vis[adj[temp][i]])
	            {vis[adj[temp][i]]=true;
	                q.push(adj[temp][i]);
	                
	            }
	        }
	        }
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
    // 		adj[v].push_back(u);
    	}
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int>ans=obj.bfsOfGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
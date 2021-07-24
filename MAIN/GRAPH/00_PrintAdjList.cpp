// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution 
{
    public:
	//Function to return the adjacency list for each vertex.
	vector<vector<int>> printGraph(int V, vector<int> adj[])
	{
	    vector<vector<int>> v;
	    vector<int> temp;
	    vector<int>:: iterator it;
	    for (int i=0;i<V;i++){
	        temp.push_back(i);
            for (it=adj[i].begin();it!=adj[i].end();it++){
                    temp.push_back(*it);
                }
           v.push_back(temp);
           temp.clear();
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
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<vector<int>>ans=obj.printGraph(V, adj);
        for(int i=0;i<ans.size();i++){
        	for(int j=0;j<ans[i].size()-1;j++){
        		cout<<ans[i][j]<<"-> ";
        	}
        	cout<<ans[i][ans[i].size()-1];
        	cout<<endl;
        }
	}
	return 0;
}  // } Driver Code Ends
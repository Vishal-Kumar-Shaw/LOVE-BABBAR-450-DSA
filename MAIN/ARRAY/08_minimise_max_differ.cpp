/*Minimise the maximum difference between heights [V.IMP]*/

// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
       
        int ans = arr[n-1]-arr[0];
        
        int s=arr[0]+k;
        int l=arr[n-1]-k;
        
        int mine,maxe;
        for(int i=0;i<n-1;i++){
            mine = min(s, arr[i+1]-k);
            maxe = max(l,arr[i]+k);
            if(mine<0) continue;
            ans= min(ans,maxe-mine);
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
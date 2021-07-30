// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long ma = arr[0];
	    long long mi = arr[0];
	    long long prod= arr[0];
	    for(int i=1;i<n;i++){
	        if(arr[i]<0){
	            swap(mi,ma);
	        }
	        mi = min((long long)arr[i], mi*arr[i]);
	        ma = max((long long)arr[i], ma*arr[i]);
	        if(ma>prod) prod = ma;
	    }
	    return prod;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
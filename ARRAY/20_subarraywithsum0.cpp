// { Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    
    //################# naive approach ######################
  /*  bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum=0, flag=0;
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                if(sum==0){
                    flag=1;
                    break;
                    
                }
        }
        if(flag==1)
            break;
    }
    if(flag==1) return true;
    else return false;
    }*/
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum=0, flag=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum ==0 || m[sum] || arr[i]==0){
                flag=1;
                break;
            }
            else
                m[sum]=1;
        }
        if(flag == 1) return true;
        else return false;
    }
};

// { Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  // } Driver Code Ends
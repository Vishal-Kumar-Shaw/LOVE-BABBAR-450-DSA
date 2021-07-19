/*Move all the negative elements to one side of the array*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int neg[n]={0}; // negative array
        int temp[n];
        int i=0,j=0,k=0;
        for(i=0;i<n;i++)
            temp[i]=arr[i];
         i=0;
        while(i<n){
            if(temp[i]>=0)
                arr[j++]=temp[i++];
            else if(temp[i]<0)
                neg[k++]=temp[i++];
        }
        k=0;
        while(j!=n){
            arr[j++]=neg[k++];
        }
        
        
                
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}
  // } Driver Code Ends
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends

void firstOccur(int arr[], int n, int x, int &ist){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid = start +(end-start)/2;
        if(arr[mid]==x){
            ist=mid;
            end=mid-1;
            }
        else if(arr[mid]>x)
            end=mid-1;
        else
            start=mid+1;
}
}

void lastOccur(int arr[], int n, int x, int &last){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid = start +(end-start)/2;
        if(arr[mid]==x){
            last=mid;
            start=mid+1;
                        }
        else if(arr[mid]>x)
            end=mid-1;
        else
            start=mid+1;
}
    
}
vector<int> find(int arr[], int n , int x )
{
    int ist=-1;
    int last=-1;
    firstOccur(arr,n,x,ist);
    lastOccur(arr,n,x,last);
    vector<int> v;
    v.push_back(ist);
    v.push_back(last);
    return v;
}
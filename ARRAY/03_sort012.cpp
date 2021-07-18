/*Given an array which consists of only 0, 1 and 2. 
Sort the array without using any sorting algo*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int c0=0,c1=0,c2=0;
         int j=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) c0++;
            if(a[i]==1) c1++;
            if(a[i]==2) c2++;
        }
       
        while(c0!=0){
            a[j++]=0;
            c0--;
        }
         while(c1!=0){
            a[j++]=1;
            c1--;
        }
         while(c2!=0){
            a[j++]=2;
            c2--;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
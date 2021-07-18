/ { Driver Code Starts
//Initial Template for C++

#include <stdio.h>

void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n] , i;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
        return 0;
}
// } Driver Code Ends


//User function Template for C++

void rotate(int arr[], int n)
{
    int temp[n],k,j=0;
    
    for(int i=0;i<n;i++)
        temp[i]=arr[i];
    k=temp[n-1];
    arr[0]=k;
    int i=1;
    while(i<n){
        arr[i++]=temp[j++];
    }
        
}
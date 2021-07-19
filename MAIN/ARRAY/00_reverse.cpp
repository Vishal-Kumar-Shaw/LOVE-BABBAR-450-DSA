#include <iostream>
#include<stack>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	        
	   stack<int>s;
	   for(int i=0;i<n;i++)
	    s.push(arr[i]);
	    
	    for(int i=0;i<n;i++){
	        cout<<s.top()<<" ";
	        s.pop();
	        
	    }
	  cout<<endl;  
	}
	return 0;
}
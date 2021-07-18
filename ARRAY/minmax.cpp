// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends
long long minele(long long a[],int n){
    sort(a,a+n);
    return a[0];
}
long long maxele(long long a[],int n){
    sort(a,a+n);
    return a[n-1];
}
pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> p;
    p.first=minele(a,n);
    p.second=maxele(a,n);
    return p;
    
}
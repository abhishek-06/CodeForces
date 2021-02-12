#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(t)            int t; cin>>t; while(t--)
 
 
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int noOfFines(int a[] , int b[] , int n) {

	bool visited[n+1];
	visited[0] = true;

	for(int i=1;i<=n;i++)
		visited[i] = false;

	int i = 0 ,j = 0;

	int ans = 0;

	while(i<n && j<n) {

		if(a[i]==b[j]){
			visited[a[i]] = true;
			visited[b[j]] = true;
			i++;
			j++;
		} else if(visited[a[i]]) {
			i++;
		} else if(visited[b[j]]){
			j++;
		} else {
			ans++;
			visited[b[j]] = true;
			j++;
		}

	}

	return ans;

}
 
int32_t main()
{
    c_p_c();
    int n;
    cin >> n;

    int a[n] , b[n];

    for(int i=0;i<n;i++)
    	cin >> a[i];

    for(int i=0;i<n;i++)
    	cin >> b[i];

    cout<<noOfFines(a,b,n);
    return 0;
}
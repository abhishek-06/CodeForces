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

int max_val(vector<int> a , int n) {

	int dp[n] = {0};

	dp[n-1] = a[n-1];

	for(int i = n-2; i>=0 ;i--) {

		if(i+a[i]<n)
			dp[i] = dp[i+a[i]] + a[i] ;
		else
			dp[i] = a[i];
	}
	// for(int i=0;i<n;i++)
	// 	cout<<dp[i]<<" ";
	// cout<<endl;

	return *max_element(dp,dp+n);

}
 
int32_t main()
{
    c_p_c();

    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	vector<int> a(n);
    	for(int i=0;i<n;i++)
    		cin >> a[i];

    	cout<<max_val(a,n)<<endl;
    }
    return 0;
}
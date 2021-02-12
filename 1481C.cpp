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

bool isPossible(int a[] , int b[] ,int c[] ,int n , int m , vector<int> &ans) {


	vi arr[n+1];
	for(int i=0;i<n;i++){
		if(a[i]!=b[i]){
			arr[b[i]].pb(i);
		}
	}

	int last = -1;

	if(arr[c[m-1]].size()>0){
		last = arr[c[m-1]].back();
		arr[c[m-1]].pop_back();
	}else {
		for(int i=0;i<n;i++){
			if(b[i]==c[m-1]){
				last = i;
			}
		}
	}

	if(last == -1)
		return false;

	ans[m-1] = last;

	for(int i=0;i<m-1;i++) {

		if(arr[c[i]].size()>0){
			ans[i] = arr[c[i]].back();
			arr[c[i]].pop_back();
		} else {
			ans[i] = last;
		}

	}

	for(int i=1;i<=n;i++){
		if(arr[i].size()>0)
			return false;
	}

	return true;

}
 
int32_t main()
{
    c_p_c();
    w(t) {
    	int n,m;
    	cin >> n >> m;

    	int a[n] , b[n] , c[m];

    	for(int i=0;i<n;i++)
    		cin >> a[i];

    	for(int i=0;i<n;i++)
    		cin >> b[i];

		for(int i=0;i<m;i++)
		    cin >> c[i];

		vi ans(m,-1);
		bool flag = isPossible(a,b,c,n,m,ans);

		if(flag == false) {
			cout<<"NO\n";
		} else {
			cout<<"YES\n";
			for(int i=0;i<m;i++)
				cout<<ans[i]+1<<" ";

			cout<<"\n";
		}
    }
    return 0;
}
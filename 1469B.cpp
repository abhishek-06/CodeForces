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
 
 
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int maxPossible(int r[] , int n , int b[] , int m) {

	for(int i=1;i<n;i++)
		r[i]+=r[i-1];

	for(int i=1;i<m;i++)
		b[i]+=b[i-1];

	int r_max = *max_element(r,r+n);

	if(r_max<0)
		r_max = 0;


	int b_max = *max_element(b,b+m);

	if(b_max<0)
		b_max = 0;

	return r_max + b_max;
}
 
int32_t main()
{
    c_p_c();

    int t;
    cin >> t;

    while(t--) {

    	int n;
    	cin >> n;

    	int r[n];
    	for(int i=0;i<n;i++)
    		cin >> r[i];

    	int m;
    	cin >> m;

    	int b[m];

    	for(int i=0;i<m;i++)
    		cin >> b[i];


	    cout<<maxPossible(r,n,b,m)<<endl;
    }

    return 0;
}
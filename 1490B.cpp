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

int minMoves(int c0 , int c1 , int c2 , int n){

	if(c0 == c1 && c1 == c2)
		return 0;

	if(c0 == n/3) {

		if()

	}
}
 
int32_t main()
{
    c_p_c();
    w(t){
    	int n;
    	cin >> n;

    	int a[n];
    	int c0 = 0;
    	int c1 = 0;
    	int c2 = 0;

    	for(int i=0;i<n;i++){
    		cin >> a[i];
    		if(a[i]%3 == 0)
    			c0++;
    		else if(a[i]%3 == 1)
    			c1++;
    		else
    			c2++;
    	}

    	cout<<minMoves(c0 , c1 , c2 , n)<<endl;
    }
    return 0;
}
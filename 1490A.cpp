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
 
int32_t main()
{
    c_p_c();
    w(t){
    	int n;
    	cin >> n;

    	int a[n];
    	for(int i=0;i<n;i++)
    		cin >> a[i];

    	int count = 0;

    	for(int i=0;i<n-1;i++){
    		if(max(a[i],a[i+1]) <=2*min(a[i] , a[i+1]))
    			continue;
    		else{
    			
    			int z = min(a[i],a[i+1]);

    			while((z*2<max(a[i],a[i+1]))) {
    				z = z*2;
    				count++;
    			}
    		}
    	}

    	cout<<count<<endl;
    }
    return 0;
}
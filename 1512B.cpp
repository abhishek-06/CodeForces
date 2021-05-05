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

    	char a[n][n];

    	vector<pair<int,int>> v;
    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cin >> a[i][j];

    			if(a[i][j] == '*')
    				v.push_back({i,j});
    		}
    	}

    	int x1,y1,x2,y2;
    	if(v[0].first == v[1].first){
    		if(v[0].first !=0){
    			x1 = v[0].first - 1;
    			x2 = x1;
    			y1 = v[0].second;
    			y2 = v[1].second;
    		}else{
    			x1 = v[0].first + 1;
    			x2 = x1;
    			y1 = v[0].second;
    			y2 = v[1].second;
    		}
    	}else if(v[0].second == v[1].second){
    		if(v[0].second !=0){
    			x1 = v[0].first;
    			x2 = v[1].first;

    			y1 = v[0].second-1;
    			y2 = v[1].second-1;
    		}else{
    			x1 = v[0].first;
    			x2 = v[1].first;
    			
    			y1 = v[0].second+1;
    			y2 = v[1].second+1;
    		}
    	} else {
    		x1=v[0].first;
    		y1=v[1].second;

    		x2 = v[1].first;
    		y2 = v[0].second;
    	}

    	a[x1][y1] = '*';
    	a[x2][y2] = '*';

    	for(int i=0;i<n;i++){
    		for(int j=0;j<n;j++){
    			cout << a[i][j];
    		}
    		cout<<"\n";
    	}
    }
    return 0;
}
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
    	int b[n+2];
    	for(int i=0;i<n+2;i++)
    		cin >> b[i];

    	sort(b,b+n+2);
    	int sum[n+1];
    	sum[0] = b[0];
    	for(int i=1;i<n+1;i++){
    		sum[i] = sum[i-1] + b[i];
    	}

    	int temp = -1;
    	int total = b[n+1];

    	for(int i=0;i<n+1;i++){
    		if(sum[n] - b[i] == total){
    			temp = i;
    			break;
    		}
    	}

    	if(temp!=-1){
    		for(int i=0;i<n+1;i++){
    			if(i!=temp)
    				cout<<b[i]<<" ";
    		}
    		cout<<"\n";
    		continue;
    	}

    	if(sum[n-1] == b[n]){
    		for(int i=0;i<n;i++){
    			cout<<b[i]<<" ";
    		}
    		cout<<"\n";
    		continue;
    	}

    	cout<<"-1\n";
    }
    return 0;
}
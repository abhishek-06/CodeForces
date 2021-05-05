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
    	int n,k;
    	cin >> n >> k;

    	string s;
    	cin >> s;

    	int i=0;
    	int count = 0;
    	while(i<n){
    		if(s[i]=='*'){
    			s[i] = 'x';
    			count++;
    			break;
    		}	
    		i++;
    	}

    	int j = n-1;

    	while(j>i){
    		if(s[j]=='*'){
    			s[j] = 'x';
    			count++;
    			break;
    		}
    		j--;
    	}

    	while(i<j && j-i>k){

    		for(int x = i+k;x>i;x--){
    			if(s[x]=='*'){
    				s[x] = 'x';
    				count++;
    				i = x;
    				break;
    			}
    		}
    	}

    	cout<<count<<endl;
    }
    return 0;
}
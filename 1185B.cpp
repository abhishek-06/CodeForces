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
#define w(x)            int x; cin>>x; while(x--)
 
 
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
string isPossible(string s , string t) {
 
 
	string no = "NO";
	string yes = "YES";
 
	int n = s.length();
	int m = t.length();
 
	if(n>m)
		return no;
 
	if(n==m){
		if(s.compare(t) ==0)
			return yes;
		else
			return no;
	}
 
	if(s[0]!=t[0])
		return no;
 
 
	int i = 0;
	int j = 0;
 
	while(i<n && j < m) {
		if(s[i]==t[j]){
			i++;
			j++;
		} else if(t[j]!=s[i-1]) {
			return no;
		} else {
		    j++;
		}
	}
 
	if(i==n && j<m) {
 
		while(j<m) {
			if(t[j]!=s[i-1])
				return no;
			j++;
		}
	}
 
	if(i==n && j==m)
		return yes;
	return no;
}
 
int32_t main()
{
    c_p_c();
 
    int t;
    cin >> t;
 
    while(t--) {
 
    	string s,t;
    	cin >> s >> t;
 
    	cout << isPossible(s,t)<<endl;
    }
 
    return 0;
}
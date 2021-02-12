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

string isPossible(string s , int x , int y) {

	string yes = "YES";
	string no = "NO";

	int n = s.length();
	int px = 0;
	int py = 0;
	for(int i=0;i<n;i++) {

		if(s[i]=='U'){
			if(y > py)
				py++;
		}else  if(s[i] == 'L') {
			if(x < px)
				px--;
		} else if(s[i] =='D') {
			if(y < py)
				py--;
		} else if (s[i] == 'R') {
			if(x>px)
				px++;
		}

		if(px == x && py == y)
			return yes;

	}
	return no;
}
 
int32_t main()
{
    c_p_c();

    w(t) {
    	int x,y;
    	cin >> x >> y;

    	string s;
    	cin >> s;

    	cout<<isPossible(s,x,y)<<endl;
    }
    return 0;
}
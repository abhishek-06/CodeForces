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
 

 string isRBS(string s) {

 	string no = "NO";
 	string yes = "YES";
 	if(s[0]==')')
 		return no;

 	int open = 0;
 	int close = 0;

 	int q = 0;

 	int n = s.length();

 	if(n%2!=0)
 		return no;

 	if(s[n-1] =='(')
 		return no;

 	for(int i = 0;i<n;i++) {

 		if(s[i] == '(')
 			open++;
 		else if(s[i]==')')
 			close++;
 		else if(s[i]=='?')
 			q++; 	}

 	//cout<<open<<" "<<close<<endl;

 	if(open >0 && close > 0 && q%2 == 0)
 		return yes;

 	return no;
 }
int32_t main()
{
    c_p_c();
    int t;
    cin >> t;

    while(t--) {
    	string s;
    	cin >> s;

    	cout<<isRBS(s)<<endl;
    }
    return 0;
}
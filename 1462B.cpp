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

string isPossible(string s) {


	string no = "NO";
	string yes = "YES";

	// string ans = "2020";

	int n = s.length() ;

	if(n<4)
		return no;

	// int k = 0;

	// string temp = "";

	// for(int i=0;i<n;i++) {
	// 	if(s[i] == '2' || s[i] == '0')
	// 		temp = temp+s[i];
	// }

	// s = temp;

	// stack<char> st;

	// n = s.length();

	// for(int i=0;i<n;i++) {

	// 	if(st.empty() || st.top()!=s[i])
	// 		st.push(s[i]);
	// }

	// temp = "";

	// while(!st.empty()) {

	// 	temp = st.top() + temp;
	// 	st.pop();
	// }

	// s = temp;

	// n = s.length();

	// for(int i=0;i<n-3;i++) {

	// 	if(s[i] == ans[0] && s[i+1] == ans[1] && s[i+2]==ans[2] && s[i+3] == ans[3]){
	// 		return yes;
	// 	}
	// }

	// return no;

	if(s[0] == '2' && s[n-3] == '0' && s[n-2]== '2' && s[n-1] == '0')
		return yes;

	if(s[0] == '2' && s[1] == '0' && s[n-2]== '2' && s[n-1] == '0')
		return yes;

	if(s[0] == '2' && s[1] == '0' && s[2]== '2' && s[n-1] == '0')
		return yes;

	if(s[0] == '2' && s[1] == '0' && s[2]== '2' && s[3] == '0')
		return yes;

	if(s[n-4] == '2' && s[n-3] == '0' && s[n-2]== '2' && s[n-1] == '0')
		return yes;

	return no;

}
 
int32_t main()
{
    c_p_c();
    w(t) {

    	int n;
    	cin >> n;

    	string s;
    	cin >> s;

    	cout<<isPossible(s)<<endl;
    }
    return 0;
}
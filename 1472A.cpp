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

string isPossible(int a , int b, int n) {

	string yes = "YES";
	string no = "NO";

	if(a%2!=0 && b%2!=0 && n==1)
		return yes;

	if(a%2!=0 && b%2!=0 && n>1)
		return no;

	int x = 1 ;
	int y = 1;

	while(a%2==0 && a>1) {
		a = a/2;
		x = x*2;
	}

	while(b%2==0 && b > 1) {
		b = b/2 ;
		y = y*2;
	}

	if(x*y >= n)
		return yes;

	return no;
}
 
int32_t main()
{
    c_p_c();
    int t;
    cin >> t;

    while(t--) {

    	int a,b,n;
    	cin >> a >> b >> n;
    	cout<<isPossible(a,b,n)<<endl;
    }
    return 0;
}
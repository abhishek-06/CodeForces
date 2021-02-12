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
 
string isPossible(int sum ,int count_one , int count_two) {

	string yes = "YES";
	string no = "NO";

	if(sum%2!=0)
		return no;

	if(count_two %2 !=0 && count_one == 0)
		return no;

	return yes;
} 

int32_t main()
{
    c_p_c();

    int t;
    cin >> t;

    while(t--) {
    	int n;
    	cin >> n;

    	int sum = 0;
    	int count_two = 0;
    	int count_one = 0;
    	int x;
    	for(int i=0;i<n;i++) {
    		cin >> x;
    		sum+=x;
    		if(x==1)
    			count_one++;
    		else
    			count_two++;
    	}

    	cout<<isPossible(sum , count_one , count_two)<<endl;
    }
    return 0;
}
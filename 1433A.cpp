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
 

int keyPress(int x) {

	// if(x==1)
	// 	return 1;

	// if(x==11)
	// 	return 3;

	// if(x==111)
	// 	return 6;

	// if(x==1111)
	// 	return 10;

	int a = x%10;

	int ans = (a-1)*10;

	if(x>1000)
		ans+=10;
	else if(x>100)
		ans+=6;
	else if(x>10)
		ans+=3;
	else
		ans+=1;

	return ans;

} 
int32_t main()
{
    c_p_c();
    w(t) {
    	int x;
    	cin >> x;

    	cout<<keyPress(x)<<endl;
    }
    return 0;
}
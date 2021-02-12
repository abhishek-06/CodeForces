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

    vector<int> v(9);
    for(int i=0;i<9;i++)
        v[i] = i+1;

    reverse(v.begin() , v.end());
    w(t) {

    	int x;
    	cin >> x;

        if(x>45){
            cout<<"-1\n";
            continue;
        }
    	
        int k = 8;
        vi ans;
        int i = 0;
        while(x>0) {
            if(x>=v[i]){
                ans.push_back(v[i]);
                x = x - v[i];
            }
            i++;
        }

        for(int j = ans.size()-1 ; j>=0 ;j--)
            cout<<ans[j];

        cout<<endl;
    }
    return 0;
}
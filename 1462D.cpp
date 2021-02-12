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
 

int countMin(vi v , int sum) {
    
    int n = v.size();
    
    for(int i = n; i>=1;i--) {
        
        if(sum%i==0) {
            
            int cur = 0;
            int req = sum/i;
            
            bool ans = true;
            
            for(int j =0 ;j<n;j++) {
                cur+=v[j];
                
                if(cur > req) {
                    ans = false;
                    break;
                } else if(cur == req) {
                    cur = 0;
                }
            }
            
            if(ans == true)
                return n - i;
        }
        
    }
} 
 
int32_t main() {
    
    w(t) {
        
        int n;
        cin >> n;
        
        vi v(n);
        int sum = 0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            sum+=v[i];
        }
        
        cout<<countMin(v,sum)<<endl;
    }
    
    return 0;
}
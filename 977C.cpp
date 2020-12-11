#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n,k;
    cin >> n >> k;

    ll a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a,a+n);

    if(k==0){
        if(a[0]==1){
            cout<<"-1";
            return 0;
        } else {
            cout<<a[0]-1;
            return 0;
        }
    }

    if(k>n){
        cout<<"-1";
        return 0;
    }

    ll ans = a[k-1];

    if(k==n){
        cout<<ans;
        return 0;
    }

    if(ans == a[k]){
        cout<<"-1";
        return 0;
    }

    cout<<ans;
    return 0;

}


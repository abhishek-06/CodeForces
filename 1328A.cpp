#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >> t;

    while(t--) {
        ll a , b;
        cin >> a >> b;

        ll ans = a%b;

        if(ans ==0)
        cout<<0<<endl;
        else
        cout<<b-ans<<endl;
    }
    return 0;
}
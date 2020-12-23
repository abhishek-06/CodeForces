#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll myFun(ll n , ll k , ll a[]){

	if(k>=n)
		return *max_element(a,a+n);

	ll max_element = max(a[0],a[1]);
	ll count = 1;
	for(ll i=2;i<n;i++){
		if(max_element > a[i]){
			count++;

			if(count == k)
				return max_element;
		} else {
			max_element = a[i];
			count  = 1;
		}
	}

	return max_element;

}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif

	int t;
	t = 1;
	while(t--){
		ll n,k;
		cin >> n >> k;

		ll a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];

		cout<<myFun(n,k,a);
	}

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif

	int n,k;
	cin >> n >> k;
	string s;
	cin >> s;

	unordered_set<char> u_set;
	while(k--) {
		char ch;
		cin >> ch;
		u_set.insert(ch);
	}

	vector<ll> str_len;
	int count = 0;

	for(int i=0;i<n;i++) {

		if(u_set.find(s[i])==u_set.end()){
			if(count!=0)
				str_len.push_back(count);
			count = 0;
		} else {
			count++;
		}
	}

	if(count!=0)
		str_len.push_back(count);

	int size = str_len.size();

	ll ans = 0;

	for(int i=0;i<size;i++) {
		ll temp = str_len[i];

		ll temp_ans = (temp*(temp+1))/2;
		ans+=temp_ans;
	}

	cout<<ans;

	return 0;
}
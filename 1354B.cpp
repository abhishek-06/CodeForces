#include<bits/stdc++.h>
using namespace std;

int shortestLength(string s) {
	unordered_map<char , int> mp;
	int n = s.length();
	int ans = INT_MAX;
	int i = 0;
	mp[s[i]]++;
	for(int j=1;j<n;j++) {
		mp[s[j]]++;

		//cout<<s[i]<<endl;
		while(i<j && mp[s[i]]>1 ){
			//cout<<s[i] <<"i loop\n";
			mp[s[i]]--;
			i++;

		}

		// cout<<mp['1']<<endl;
		// cout<<mp['2']<<endl;
		// cout<<mp['3']<<endl<<endl;

		if(mp['1'] > 0 && mp['2']>0 && mp['3']>0)
			ans = min(ans , mp['1']+mp['2']+mp['3']);
	}

	if(ans==INT_MAX)
	return 0;

	return ans;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif

	int t;
	cin >> t;

	while(t--) {
		string s;
		cin >> s;

		cout<<shortestLength(s)<<endl;
	}

	return 0;
}
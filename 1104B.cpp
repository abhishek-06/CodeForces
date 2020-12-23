#include<bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif
	
	string s;
	cin >> s;

	stack<char> st;
	int count = 0;
	int n = s.length();
	for(int i=0;i<n;i++){

		if(st.empty()){
			st.push(s[i]);
		} else if(st.top()==s[i]) {
			st.pop();
			count++;
		} else {
			st.push(s[i]);
		}
	}

	if(count % 2==0)
		cout<<"NO";
	else
		cout<<"YES";

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool myComp(pair<int , int > a , pair<int , int> b) {

	if(a.first != b.first)
		return a.first < b.first;

	return a.second < b.second;
}

vector<string> isPath(vector<pair<int , int >> arr){

	sort(arr.begin() , arr.end() , myComp);

	vector<string> returnAns;
	string ans = "";

	int x_prev = 0;
	int y_prev = 0;

	for(auto it = arr.begin() ;it!= arr.end() ;it++) {
		int x = it->first;
		int y = it->second;

		if(y < y_prev ){
			returnAns.push_back("NO");
				return returnAns;
		}

		int x_diff = x - x_prev;
		int y_diff = y - y_prev;

		while(x_diff--)
			ans = ans + "R";

		while(y_diff--)
			ans = ans + "U";

		x_prev = x;
		y_prev = y;

	}

	returnAns.push_back("YES");
	returnAns.push_back(ans);

	return returnAns;
}

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt" , "w" ,stdout);
	#endif

	int t;
	cin >> t;

	while(t--){

		int n;
		cin >> n;

		vector<pair<int , int >> arr;
		for(int i=0;i<n;i++) {
			int x,y;
			cin >> x >> y;

			arr.push_back({x,y});
		}

		vector<string> ans= isPath(arr);
		for(auto it = ans.begin() ; it!=ans.end() ;it++){
			cout<<*it<<endl;
		}

	}

	return 0;
}
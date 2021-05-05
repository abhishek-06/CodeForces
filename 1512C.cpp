#include<bits/stdc++.h>
using namespace std;
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
bool isPalindrome(string s , int n){
    
    for(int i=0;i<n;i++)
    if(s[i]!=s[n-1-i])
    return false;
    
    return true;
}

string isPossible(string s,int a, int b){

	string ans = "-1";
    int count = 0;
    
	int n = s.length();
	
	for(int i=0;i<n;i++){
	    if(s[i]=='1'){
	        b--;
	    } else if(s[i]=='0'){
	        a--;
	    }
	}
	
	
	if(a<0 || b<0)
	return ans;
	
	for(int i=0;i<n;i++){
		if(s[i]=='?' && s[n-i-1]=='1'){
			s[i]='1';
			b--;
		} else if(s[i]=='?' && s[n-i-1]=='0'){
			s[i]='0';
			a--;
		}
	}

	if(a<0 || b<0)
		return ans;

	for(int i=0;i<n;i++){
		if(i!=n-i-1 && s[i]=='?' && s[n-i-1]=='?'){
			if(a>=2){
				a = a-2;
				s[i]='0';
				s[n-i-1]='0';
			} else if(b>=2){
				b = b-2;
				s[i]='1';
				s[n-i-1]='1';
			} else{
				return ans;
			}
		} else if(i==n-i-1 && s[i]=='?' && s[n-i-1]=='?'){
			if(a>0){
				s[i] = '0';
				a--;
			} else if(b>0){
				s[i] = '1';
				b--;
			} else {
				return ans;
			}
		}
	}
	
	if(a==0 && b == 0 && isPalindrome(s,n)){
	    return s;
	}

	return ans;

}
 
int32_t main()
{
    c_p_c();
    int t;
    cin >> t;
    while(t--){
    	int a,b;
    	cin >> a >> b;
    	string s;
    	cin >> s;

    	cout<<isPossible(s,a,b)<<endl;
    }
    return 0;
}
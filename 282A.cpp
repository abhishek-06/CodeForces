#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;

    while(n--){
        string s;
        cin >> s;

        if(s[0]=='-' || s[1]=='-' || s[2]=='-'){
            ans--;
        } else {
            ans++;
        }
    }

    cout<<ans;
    return 0;
}
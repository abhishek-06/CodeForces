#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();

    int x = (s[0] - '0');
    if(x>4 && x<9)
    x = 9-x;

    s[0] = x + '0';

    for(int i=1;i<n;i++){

        int x = (s[i] - '0');

        if(x>4)
        x = 9-x;

        s[i] = x + '0';
    }

    cout<<s;
    return 0;
}
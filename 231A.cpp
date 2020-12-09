#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    while(n--) {
        int a,b,c;
        cin >> a >> b >> c;

        int ans = a+b+c;
        if(ans>=2)
        count++;
    }

    cout<<count;
    return 0;
}
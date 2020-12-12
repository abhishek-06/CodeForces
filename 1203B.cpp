#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(4*n);

        for(int i=0;i<4*n;i++){
            cin >> a[i];
        }

        sort(a.begin() , a.end());

        int area = a[0] * a[4*n -1];

        bool ans = true;

        for(int i=0;i<n;i++){
            int left_v = 2*i;
            int right_v = 4*n - 2*i - 1;

            if(a[left_v]!= a[left_v+1] || a[right_v]!=a[right_v-1] || a[left_v]*a[right_v]!=area)
            ans = false;
        }

        if(ans == true)
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
    
    return 0;

}
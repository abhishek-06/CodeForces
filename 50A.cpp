#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;

    int area = m*n;

    if(area <=1){
        cout<<0;
        return 0;
    }

    if(area %2 ==0){
        cout<<area/2;
    } else {
        cout<<(area-1)/2;
    }

    return 0;
}
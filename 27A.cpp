#include<bits/stdc++.h>
using namespace std;

int main() {

    bool visited[3005];

    for(int i=0;i<3005;i++)
    visited[i] = false;

    int n;
    cin >> n;

    for(int i=0;i<n;i++){

        int x;
        cin >> x;

        visited[x] = true;
    }

    for(int i=1;i<3005;i++)
    if(visited[i] == false){
        cout<<i;
        break;
    }

    return 0;

}
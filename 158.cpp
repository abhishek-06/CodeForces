#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    int a[n];
    for(int i=0;i<n;i++)
    cin >> a[i];

    int kth = a[k-1];

    int count = 0;
    for(int i=0;i<n;i++)
    if(a[i]>0 && a[i]>=kth)
    count++;

    cout<<count;

    return 0;
    
}
#include<bits/stdc++.h>
using namespace std;

int main() {


    int x1,y1,x2,y2;
    int x,y;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x >> y;

    int a,b;
    a = abs(x1 - x2);
    b = abs(y1 - y2);

    if(a%x==0 && b%y == 0 && (a/x)%2 == (b/y)%2 )
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}
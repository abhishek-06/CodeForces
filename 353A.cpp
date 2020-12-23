#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;

    int uOdd = 0;
    int uEven = 0;
    int lOdd = 0;
    int lEven = 0;

    while(n--){
        int x,y;
        cin >> x >> y;

        if(x%2==0 && y&2==0)
        continue;

        if(x%2==0)
        uEven++;
        else
        uOdd++;

        if(y%2==0)
        lEven++;
        else
        lOdd++;
    }

    if(lOdd == uOdd && lEven == uEven){
            cout<<min(lOdd , lEven);
    } else
    {
        cout<<"-1";
    }
        
    return 0;
}
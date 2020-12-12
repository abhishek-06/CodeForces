#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int size = 10000000;
    bool *seive = new bool[size];

    for(int i=0;i< size ;i++)
    seive[i] = true;

    for(int i=2;i*i<=size;i++){
        if(seive[i] == true) {
            for(int j= 2*i ;j<size ;j+=i){
                seive[j] = false;
            }
        }
    }

    for(int i=2;i<size;i++){
        if(seive[i]==true){
            cout<<i<<" ";
            n--;

            if(n==0)
            break;
        }
    }

    return 0;

}
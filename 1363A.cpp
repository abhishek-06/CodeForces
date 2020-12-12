#include<bits/stdc++.h>
using namespace std;

string ifPossible(){

        int n,x;
        cin >> n >> x;

        int a[n];

        int evenCount = 0;
        int oddCount = 0;

        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2==0){
                evenCount++;
            } else{
                oddCount++;
            }
        }    

        if(oddCount ==0)
        return "No";

        if(evenCount == 0 && x%2==0)
        return "No";

        if(oddCount %2 == 0){
            evenCount = evenCount + oddCount - 2;
            oddCount = 2;
        } else {
            evenCount = evenCount + oddCount - 1;
            oddCount = 1;
        }

        if(evenCount >=x)
        return "Yes";

        if(evenCount + 1 ==x)
        return "Yes";

        return "No";


}

int main() {
    int t;
    cin >> t;
    while(t--){
        cout<<ifPossible()<<endl;

    }

    return 0;
}
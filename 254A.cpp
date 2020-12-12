#include<bits/stdc++.h>
using namespace std;

int main() {

    FILE * inputFile = fopen("input.txt","r");
    int n;
    fscanf(inputFile, "%d\n", &n);

    int x;
    
    vector<int> a(2*n);
    for(int i=0;i<2*n;i++){
        fscanf(inputFile, "%d", &x);
        a[i] = x;
    }

    fclose(inputFile);

    map<int , vector<int> > mp;

    for(int i=0;i<2*n;i++) {
        mp[a[i]].push_back(i+1);
    }

    bool ans = true;

    for(auto it = mp.begin(); it!=mp.end();it++){
        if(it->second.size()%2!=0)
        ans = false;
    }

    // if(ans == false) {
    //     cout<<"-1";
    //     return 0;
    // }

    // for(auto it = mp.begin(); it!=mp.end();it++){
    //     for(int i=0;i < it->second.size() ; i = i+2) {
    //         cout<<it->second[i]<<" "<<it->second[i+1]<<endl;
    //     }
    // }
    
    FILE * outputFile = fopen("output.txt","w");

    if(ans == false) {
        fputs("-1" , outputFile);
    } else {
       for(auto it = mp.begin(); it!=mp.end();it++){
        for(int i=0;i < it->second.size() ; i = i+2) {
            
            int x = it->second[i];
            int y = it->second[i+1];
            fprintf(outputFile , "%d %d\n", x , y);
        }
    }
    }

    return 0;


}
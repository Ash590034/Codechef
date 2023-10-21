#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int score=0;
        int n;
        cin>>n;
        map<int,int> mpp;
        
        while(n--){
            int x,y;
            cin>>x>>y;
            if(x<=8 && mpp.find(x)==mpp.end()) mpp[x]=y;
            else if (x<=8)mpp[x]=max(y,mpp[x]);
        }
        for(auto it:mpp){
            score+=it.second;
        }
        cout<<score<<endl;
    }
	// your code goes here
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int n,x;
        cin>>n>>x;
        int freshness[n];
        int cost[n];
        for(int i=0;i<n;i++){
            cin>>freshness[i];
        }
        for(int i=0;i<n;i++){
            cin>>cost[i];
        }
        for(int i=0;i<n;i++){
            if(freshness[i]>=x) ans+=cost[i];
        }
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}

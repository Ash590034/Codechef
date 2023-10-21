#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long ans=0;
        
        int n;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
            
        }
        for(int i=1;i<n;i++){
            ans+=abs(s[i]-s[i-1])-1;
            
            
            
        }
        cout<<ans<<endl;
        
    }
	// your code goes here
	return 0;
}

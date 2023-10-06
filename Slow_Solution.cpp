#include <bits/stdc++.h>
using namespace std;

int main() {
    int w;
    cin>>w;
    while(w--){
        int t,n,s;
        cin>>t>>n>>s;
        int ans=0;
        int x=s/n;
        int r=s%n;
        if(x<t){
            ans+=x*n*n;
            ans+=r*r;
            
        }
        else{
            ans+=t*n*n;
        }
        cout<<ans<<endl;
        
    }
	
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int n;
        cin>>n;
        double alice[n];
        double bob[n];
        for(int i=0;i<n;i++){
            cin>>alice[i];
        }
        for(int i=0;i<n;i++){
            cin>>bob[i];
        }
        for(int i=0;i<n;i++){
            if((double)(max(alice[i],bob[i])/min(alice[i],bob[i]))<=2) ans+=1;
        }
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}

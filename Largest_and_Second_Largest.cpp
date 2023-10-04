#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int n;
        cin>>n;
        int array[n];
        
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        sort(array,array+n);
        int flag=1;
        int i=n-1;

        while(flag!=0 && i>=0){
            if(array[n-1]!=array[i-1]){
                flag=0;
                ans=array[n-1]+array[i-1];
            }
            i--;
        }

        
        
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}

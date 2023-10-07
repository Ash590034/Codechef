#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int rem=0;
        int index=-1;

        for(int i=0;i<n;i++){
            cin>>arr[i];
           

        }
        for(int i=0;i<n;i++){
             if(rem+arr[i]<k){
                index=i+1;
                break;
                
            }
            else{
                rem+=arr[i]-k;
            }
        }

        if(index==-1) cout<<"YES"<<endl;
        else cout<<"NO "<<index<<endl;
    }
	// your code goes here
	return 0;
}

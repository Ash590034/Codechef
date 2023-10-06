#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        string ans;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<=k){
                ans+='1';
                k-=arr[i];

            }
            else ans+='0';


        }
        cout<<ans<<endl;
    }

    return 0;
}
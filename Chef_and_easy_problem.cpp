#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    sort(arr,arr+n);
    long long ans=0;
    for(int i=n-1;i>=0;i=i-2){
        ans+=arr[i];

    }
    cout<<ans<<endl;



    }
    
    
    return 0;
}
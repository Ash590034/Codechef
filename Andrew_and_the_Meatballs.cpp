#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    long long m;
    cin>>m;

    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    sort(arr,arr+n);
    long long ans=0;
    int flag=0;
    int p=0;

    for(int i=n-1;i>=0;i=i-1){
        ans+=arr[i];
        p++;

        if(ans>=m){
            flag=1;
            break;

        }

    }
    if(flag==0) cout<<-1<<endl;
    else cout<<p<<endl;



    }
    
    
    return 0;
}
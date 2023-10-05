#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    

    long long arr[n];
    long long mini=10000000000;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++){
     mini=min(mini,(arr[i+1]-arr[i]));

    }
    cout<<mini<<endl;
    
    

    

    
    
    
   
}
 return 0;
}
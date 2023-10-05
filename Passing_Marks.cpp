#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int m;
    cin>>m;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    sort(arr,arr+n);
    cout<<arr[n-m]-1<<endl;
    

    

    
    
    
   
}
 return 0;
}
#include <bits/stdc++.h>
using namespace std;
int findmissing(int arr[],int n){
    if(n==1) return arr[0];
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[n-1]!=arr[n-2]) return arr[n-1];
    int low=1,high=n-2;
    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid-1] ) return arr[mid];
        else if((mid%2==0 && arr[mid]==arr[mid+1]) || (mid%2==1 && arr[mid]==arr[mid-1])) low=mid+1;
        else high=mid-1;

    }
    return -1;


}

int main() {
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
        cout<<findmissing(arr,n)<<endl;

    //     map <int,int> mpp;
    //     int arr[n];
    //     for(int i=0;i<n;i++){
    //         cin>>arr[i];
    //         mpp[arr[i]]++;
            
    //     }
    //     for(auto it:mpp){
    //         if(it.second==1){
    //             cout<<it.first<<endl;
    //             break;
    //         } 
           
    //     }
     }

	// your code goes here
	return 0;
}


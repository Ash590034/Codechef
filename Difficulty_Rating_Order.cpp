#include <iostream>
using namespace std;

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
        int flag=1;
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]) flag=0;
            
        }
        if(flag==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
	// your code goes here
	return 0;
}

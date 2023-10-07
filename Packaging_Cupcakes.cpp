#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int maxi=INT_MIN;
        int ans=-1;
        for(int i=1;i<=a;i++){
            if(a%i>=maxi){
                maxi=a%i;
                ans=i;
            }
        }
        cout<<ans<<endl;
        

    }
    
    


    return 0;

}



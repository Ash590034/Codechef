#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[2*n];
        unordered_map <int,int> mpp;
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
            mpp[arr[i]]++;

        }
        string flag="Yes";
        for(auto it:mpp){
            if(it.second>2) flag="No";
        }
        cout<<flag<<endl;



    }
    


    return 0;

}



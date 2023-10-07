#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,b;
        cin>>l>>b;
        int copy=b;
        int cnt=0;

        for(int i=0;i<b;i++){
            if(i<=4){
                cnt++;
                copy=copy-(l/2);
                if(copy<1){
                    cout<<cnt<<endl;
                    break;

                    

                } 
                
            }
            else{
                cnt++;
                copy-=l;
                if(copy<1){
                     cout<<cnt<<endl;
                    break;


                } 

            }

        }

        
    }

    return 0;

}
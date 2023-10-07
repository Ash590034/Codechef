#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,b;
        cin>>l>>b;
        string ans;
        for(int i=0;i<=1000;i++){
            if(i%2==1){
                l=l-i;
                if(l<0){
                    cout<<"Bob"<<endl;
                    break;
                    

                }
                
            }
            else{
                b=b-i;
                if(b<0){
                    cout<<"Limak"<<endl; 
                    break;
                } 

            }
        }

    }

    return 0;

}
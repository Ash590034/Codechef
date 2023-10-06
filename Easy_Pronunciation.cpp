#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int s;
        cin>>s;
        string word;
        cin>>word;
        int count=0;
        int flag=0;

        for(int i=0;i<s;i++){
            if(word[i]!='a' && word[i]!='e' && word[i]!='i' && word[i]!='o' && word[i]!='u' ){
                count++;
                if(count>=4){
                    flag=1;
                    cout<<"NO"<<endl;
                    break;

                }

            }
            
            else{
                
                count=0;
            }
            

        }
        if(flag==0) cout<<"YES"<<endl;
         

    }

    return 0;
}

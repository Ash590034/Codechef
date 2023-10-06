#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int dragon[3];
        int sloth[3];
        int sumd=0,sums=0;
        for(int i=0;i<3;i++){
            cin>>dragon[i];
            sumd+=dragon[i];
        }
        for(int i=0;i<3;i++){
            cin>>sloth[i];
            sums+=sloth[i];
        }
        if(sumd>sums) cout<<"DRAGON"<<endl;
        else if(sums>sumd) cout<<"SLOTH"<<endl;
        else{
            if(dragon[0]>sloth[0]) cout<<"DRAGON"<<endl;
            else if(dragon[0]<sloth[0]) cout<<"SLOTH"<<endl;
            else if(dragon[1]>sloth[1]) cout<<"DRAGON"<<endl;
            else if (dragon[1]<sloth[1]) cout<<"SLOTH"<<endl;
            else cout<<"TIE"<<endl;
        }
    }
    
	// your code goes here
	return 0;
}

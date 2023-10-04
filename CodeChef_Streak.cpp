#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int countA=0,countO=0,maxA=0,maxO=0;
        int n;
        cin>>n;
        int Addy[n];
        int Om[n];
        for(int i=0;i<n;i++){
            cin>>Om[i];
        }
        for(int i=0;i<n;i++){
            cin>>Addy[i];
        }
        for(int i=0;i<n;i++){
            if(Addy[i]!=0){
                countA++;
                maxA=max(countA,maxA);
            }
            if(Addy[i]==0) countA=0;

            if(Om[i]!=0){
                countO++;
                maxO=max(countO,maxO);
            }
            if(Om[i]==0) countO=0;


        }
        if(maxA>maxO) cout<<"Addy"<<endl;
        else if(maxO>maxA) cout<<"Om"<<endl;
        else  cout<<"Draw"<<endl;
    }
	// your code goes here
	return 0;
}

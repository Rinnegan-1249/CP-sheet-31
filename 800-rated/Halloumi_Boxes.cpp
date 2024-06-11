#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>k;
        bool x=true;
        int z;
        cin>>z;
        for(int i=1;i<n;i++){
            int c;
            cin>>c;
            if(c<z){
                x=false;
            }
            z=c;
        }
        if(k!=1){
            cout<<"YES"<<endl;
        }
        else{
            if(x){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}
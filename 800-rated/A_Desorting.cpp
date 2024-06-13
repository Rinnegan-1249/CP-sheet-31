#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        bool x=true;
        int prev;
        cin>>prev;
        int next;
        int min=INT_MAX;
        for(int i=1;i<n;i++){
            cin>>next;
            if(prev>next){
                x=false;
            }
            if(min>next-prev){
                min=next-prev;
            }
            
            if(i!=n-1){
                prev=next;
            }

        }
        if(x){
            if(min!=0){
            cout<<min/2+1<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
            cout<<0<<endl;
        }
    }
}
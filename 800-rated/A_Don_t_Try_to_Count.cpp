#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int 
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        for(int i=0;i<6;i++){
            x+=x;
        }
        auto z=x.find(s);
        if(z==string::npos){
            cout<<-1<<endl;
        }
        else{
            int len=z+m;
            int ans=0;
            while(n<len){
                n*=2;
                ans++;
            }
            cout<<ans<<endl;
        }
    }
}
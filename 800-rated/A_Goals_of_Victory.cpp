#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ans=0;
        for(int i=1;i<n;i++){
            int x;
            cin>>x;
            ans-=x;
        }
        cout<<ans<<endl;
    }
}
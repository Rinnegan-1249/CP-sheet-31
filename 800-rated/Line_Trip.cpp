#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        int p;
        cin>>p;
        int max=p;
        for(int i=1;i<n;i++){
            int s;
            cin>>s;
            if(max<s-p){
                max=s-p;
            }
            p=s;
        }
        if(max<2*(x-p)){
            max=2*(x-p);
        }
        cout<<max<<endl;
    }
}
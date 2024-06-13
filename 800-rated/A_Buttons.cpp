#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){
            if(a>b){
                cout<<"First"<<"\n";
            }
            else{
                cout<<"Second"<<"\n";
            }
        }
        else{
            if(a+1>b){
                cout<<"First"<<"\n";
            }
            else{
                cout<<"Second"<<"\n";
            }
        }
    }
}
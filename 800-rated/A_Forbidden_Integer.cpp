#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES"<<"\n";
            cout<<n<<"\n";
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
         cout<<"\n";
        }
        else if(k>2){
            cout<<"YES"<<"\n";
            cout<<n/2<<endl;
            if(n%2!=0){
                cout<<3<<" ";
            }
            n-=3;
            while(n!=0){
                cout<<2<<" ";
                n-=2;
            }
            cout<<endl;
        }
        else if(k==2){
            if(n%2==0){
                cout<<"YES"<<"\n";
                cout<<n/2<<"\n";
                for(int i=0;i<n;i+=2){
                    cout<<2<<" ";
                }
                cout<<"\n";
            }
            else{
                cout<<"NO"<<"\n";
            }
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}
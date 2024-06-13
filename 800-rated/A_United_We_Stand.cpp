#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(a[0]!=a[n-1]){
            int j=n-1;
            while(a[j]==a[n-1]){
                j--;
            }
            cout<<j+1<<" "<<n-1-j<<endl;
            for(int i=0;i<=j;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=j+1;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<"\n";
        }
    }
}
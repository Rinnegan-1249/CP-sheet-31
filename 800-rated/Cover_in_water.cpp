#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string a;
        cin>>a;
        int it=0;
        int s=0;
        int c1=0;
        int c2=0;
        while(it!=n){
            if(a[it]=='#'){
                if(s==1||s==2){
                    c1+=s;
                }
                else if(s>2){
                    c2++;
                }
                s=0;
            }
            else{
                s++;
            }
            it++;
        }
        if(s==1||s==2){
            c1+=s;
        }
        else if(s>2){
            c2++;
        }
                
        if(c2>0){
            cout<<2<<endl;
        }
        else{
            cout<<c1<<endl;
        }
    }
}
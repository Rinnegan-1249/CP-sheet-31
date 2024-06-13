#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int ans=0;
        for(int x=1;x<6;x++){
            for(int y=1;y<6;y++){
                int s=min(x,y);
                char a;
                cin>>a;
                if(a=='X'){
                    ans+=s;
                }
            }
            for(int y=5;y>0;y--){
                int s=min(x,y);
                char a;
                cin>>a;
                if(a=='X'){
                    ans+=s;
                }
            }
        }
        for(int x=5;x>0;x--){
            for(int y=1;y<6;y++){
                int s=min(x,y);
                char a;
                cin>>a;
                if(a=='X'){
                    ans+=s;
                }
            }
            for(int y=5;y>0;y--){
                int s=min(x,y);
                char a;
                cin>>a;
                if(a=='X'){
                    ans+=s;
                }
            }
        }
        cout<<ans<<endl;
    }
}
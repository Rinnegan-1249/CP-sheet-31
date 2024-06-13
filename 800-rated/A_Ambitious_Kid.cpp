#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    t=1;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int min;
        cin>>min;
        min=abs(min);
        for(int i=1;i<n;i++){
            int x;
            cin>>x;
            if(abs(x)<min){
                min=abs(x);
            }
        }
        cout<<min<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> b;
        int prev;
        cin>>prev;
        b.push_back(prev);
        for(int i=1;i<n;i++){
            int ne;
            cin>>ne;
            if(ne>=prev){
                b.push_back(ne);
            }
            else{
                b.push_back(ne);
                b.push_back(ne);
            }
            prev=ne;
        }
        cout<<b.size()<<"\n";
        for(auto it=b.begin();it!=b.end();it++){
            cout<<*it<<" ";
        }
        cout<<"\n";
    }
}
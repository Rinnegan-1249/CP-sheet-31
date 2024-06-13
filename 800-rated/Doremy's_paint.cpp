#include<bits/stdc++.h>
using namespace std;
int main(){
    #define int long long int
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int count1=1;
        int count2=0;
        int count3=0;
        int t1;
        cin>>t1;
        int t2=0;
        for(int i=1;i<n;i++){
            int x;
            cin>>x;
            if(x==t1){
                count1++;
            }
            else if(x==t2){
                count2++;
            }
            else if(count2==0){
                count2++;
                t2=x;
            }
            else{
                count3++;
            }
        }
        if(count3!=0){
            cout<<"No"<<endl;
        }
        else if(count2==0){
            cout<<"Yes"<<endl;
        }
        else if(abs(count1-count2)>1){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}
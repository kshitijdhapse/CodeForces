#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k,in=0;
        cin>>n>>k;
        if(n<=k){
            cout<<1<<endl;
        }else{
            long long int i=1,x=i*i;
            while(x<=n){
                x=i*i;
                if(n%i==0){
                    if(n/i<=k){
                        
                        in=i;
                        // cout<<in<<endl;
                        break;
                    }
                }
                i++;
            }
            i=2;
            int stat=0;
            if(in==0){
            while(i*i<=n){
                if(n%i==0){
                    if(i>k){
                        break;
                    }
                    in=i;
                    stat=1;
                }
                i++;
            }}
            if(in==0){
                in=n;
            }
            if(stat==0){
            cout<<in<<endl;
            }else{
                cout<<n/in<<endl;
            }
        }
       
    }
    return 0;
}
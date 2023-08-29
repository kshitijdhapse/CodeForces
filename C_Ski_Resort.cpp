#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k,q;
    cin>>n>>k>>q;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //doesnt rise above q
    ll count=0,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=q){
            count++;
            if(i==n-1){
                if(count>=k){
                    ll c=((count+1-k)*(count+2-k));
                    sum+=c/2;
                }    
            }
        }else{
            if(count>=k){
                ll c=((count+1-k)*(count+2-k));
                sum+=c/2;
            }
            count=0;
        }
    }
    cout<<sum<<endl;
}
return 0;
}
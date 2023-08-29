#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    ll o=0,e=0,mo=INT_MAX,me=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            e++;
            me=min(me,arr[i]);
        }else{
            o++;
            mo=min(mo,arr[i]);
        }
    }
    if(e==n||o==n){
        cout<<"YES"<<endl;
    }else{
        if(mo>me){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }

    
}
return 0;
}
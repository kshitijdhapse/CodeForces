#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll arr[n],pig=0,av=0,freeav=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1){
        pig++;
        if(freeav==0){
            av++;
        }else{
            freeav--;
        }
    }else{
        ll b=(pig+1)/2,g=(pig/2);
        freeav=av-(((b+1)/2)+((g+1)/2));
    }
}
    cout<<av<<endl;
}
return 0;
}
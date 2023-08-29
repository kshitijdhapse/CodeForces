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
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ar[i]=arr[i];
    }
    sort(ar,ar+n);
    int stat=0;
    for(int i=0;i<n;i++){
        if((ar[i]%2==0&&arr[i]%2!=0)||(ar[i]%2!=0&&arr[i]%2==0)){
            cout<<"NO"<<endl;
            stat=1;
            break;
        }
    }
    if(stat==0){
        cout<<"YES"<<endl;
    }
}
return 0;
}
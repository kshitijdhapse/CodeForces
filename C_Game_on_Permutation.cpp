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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ar[n];
    for(int i=0;i<n;i++){
        ll count=0;
        for(int j=0;j<=i;j++){
            if(arr[j]<arr[i]){
                count++;
            }
        }
        ar[i]=count;
            // cout<<ar[i]<<" ";
    }
    // cout<<endl;
    int ans=0;
    for(int i=0;i<n-1;i++){
        if((ar[i]==0&&ar[i+1]!=0)||ar[i]>=ar[i+1]&&ar[i]!=0){
            ans++;
        }
    }
    cout<<ans<<endl;

}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll n,t;
cin>>n>>t;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
ll i=0,j=0,sum=0,ans=0;
while(j<=n-1){
    if(sum<t){
        sum+=arr[i];
        i++;
    }else{
        if(sum==t){
        ans=max(ans,i-j+1);
        }else{
        ans=max(ans,i-j);
        }
        sum-=arr[j];
        j++;
    }
}
cout<<ans-1<<endl;
return 0;
}
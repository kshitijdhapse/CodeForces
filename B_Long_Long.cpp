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
     ll stat1=0,stat2=0,in=-1,in2=-2,c1=0,c2=0,sum=0;
     for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=abs(arr[i]);
        if(stat2==0&&arr[i]<0){
            in=i;
            stat2=1;
        }
     }

    for(int i=in;i<=n-1;i++){
        if(i==in&&arr[i]<0){
            c1++;
            stat1=0;
        }else if(stat1==1&&arr[i]<0){
            stat1=0;
            c1++;
        }
        else if(arr[i]>0){
            stat1=1;
        }
        
     }
     cout<<sum<<" "<<c1<<endl;
     
}
return 0;
}
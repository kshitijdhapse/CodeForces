#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
ll d=1;
while(t--){
    ll a,b,stat=0,rem=0,count=0;
    cin>>a>>b;
    char prev='C';
    pair<ll,char> arr[b];
    ll sum=0;
    for(ll i=0;i<b;i++){
        cin>>arr[i].first>>arr[i].second;
        if(i==0){prev=arr[i].second;}
    if(arr[i].second=='C'){
        sum+=arr[i].first;
    }
    else{
        sum-=arr[i].first;
    }
    //cout<<arr[i].first<<" "<<a+(abs(sum)/a)<<endl;
    if(arr[i].first>=a+(abs(sum)/a)&&prev!=arr[i].second){
        prev=arr[i].second;
    }
    ll x=sum/a;
      if(prev==arr[i].second){
        count+=abs(abs(x)-abs(rem));
        //cout<<x<<" "<<rem<<endl;
        rem=x;
      }
      //prev=arr[i].second;
    }
    cout<<"Case #"<<d++<<": "<<count<<endl;  
}
return 0;
}
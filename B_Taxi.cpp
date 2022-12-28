#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll n;
    cin>>n;
    int arr[n];
    map<int,int> mp;
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    ll taxi=0;
if(mp[3]==mp[1]){
    taxi+=mp[3];
}
else if(mp[3]>mp[1]){
    taxi+=mp[3];
}
else{
    taxi+=mp[3];
    ll x=(mp[1]-mp[3]);
    ll a=x%4;
    //if(x%4==0){
        
        x=x/4;
    //}
    //else{
      //  x=(x/4)+1;
    //}
    taxi+=x;
    
    //cout<<a<<endl;
    if(a==3){
        taxi++;
    }
    else if(mp[2]%2!=1&&(a==1||a==2)){
        taxi++;
    }
}
taxi+=(mp[2]+1)/2;
//sum=(mp[2]*2)+(mp[1]*1);
cout<<taxi+mp[4]<<endl;
return 0;
}
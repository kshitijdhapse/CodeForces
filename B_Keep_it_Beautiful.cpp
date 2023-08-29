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
    if(n==1){
        cout<<1<<endl;
        continue;
    }
    ll stat=0,in=0,m=INT_MAX,mx=0,m2=INT_MAX,l=0,f=0;
    string s;
    for(int i=0;i<n;i++){
        if(i==0){
            f=arr[i];
            l=arr[i];
            s+='1';
        }
        else if(arr[i]>=f&&stat==0&&arr[i]>=l){
            l=arr[i];
            s+='1';
        }else if(arr[i]<=f&&stat==0&&arr[i]<l){
            stat=1;
            l=arr[i];
            s+='1';
        }else if(stat==1&&arr[i]>=l&&arr[i]<=f){
            s+='1';
            l=arr[i];
        }else{
            s+='0';
        }
    }
    
    cout<<s<<endl;
}
return 0;
}
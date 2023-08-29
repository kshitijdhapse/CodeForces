#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll m=INT_MAX;
    for(int i=0;i<n-1;i++){
        m=min(arr[i+1]-arr[i],m);
    }
    if(m<0){
        m=0;
    }else if(m==0||m==1){
        m=1;
    }else {
        m=(m/2)+1;
    }

    cout<<m<<endl;
}
return 0;
}
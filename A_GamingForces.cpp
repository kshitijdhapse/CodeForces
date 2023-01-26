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
ll x=0;
ll sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1){
        x++;
    }
    sum+=arr[i];
}
cout<<(n-x)+((x+1)/2)<<endl;
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll k;
cin>>k;
ll count=0;
ll arr[n];
cin>>arr[0];
for(int i=1;i<n;i++){
    cin>>arr[i];
    if(arr[i]<arr[i-1]){
        count++;
    }
}
cout<<count<<" "<<k<<endl;
if(count<=k){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
return 0;
}
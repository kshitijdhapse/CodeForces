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
ll one=0,zer=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1){
        one++;
    }
    if(arr[i]==0){
        zer++;
    }
}
if(zer==0){
    cout<<0<<endl;
}else if(zer<=(n+1)/2){
    cout<<0<<endl;
}
else if(one==0){
    cout<<1<<endl;
}else if(one+zer<n){
    cout<<1<<endl;
}
else{
    cout<<2<<endl;
}
}
return 0;
}
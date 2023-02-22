#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,h;
cin>>n>>h;
ll arr[n],diff[n-1];
ll count=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    diff[i]=arr[i+1]-arr[i];
}
sort(diff,diff+n-1);
ll avg=h/n;
if(h%n!=0){
    avg++;
}
for(int i=0;i<n-1;i++){
    count=max(count,diff[i]);
    if(avg>diff[i]){
        h-=(diff[i]);
        avg=h/(n-i-1);
        if(h%(n-i-1)!=0){
            avg++;
        }
        //cout<<avg<<endl;
    }
}
cout<<avg<<endl;
// if(arr[n-1]<h){
//     //cout<<max(-arr[n-1]+h+arr[0],count)<<endl;
// }
// else{

// }
}
return 0;
}
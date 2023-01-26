#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,h;
cin>>n>>h;
ll arr[n],diff[n];
ll count=0;

for(int i=0;i<n;i++){
    cin>>arr[i]; 
    
}
for(int i=0;i<n-1;i++){
    count=max(count,arr[i-1]-arr[i]);
}
if(arr[n-1]<=h){
    cout<<-arr[n-1]+h+arr[0]<<endl;
}
else{

}
}
return 0;
}
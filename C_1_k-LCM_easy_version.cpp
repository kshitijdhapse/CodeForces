#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
if(n%2!=0){
    cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
}
else if(n%4==0){
    cout<<n/4<<" "<<n/4<<" "<<n/2<<endl;
}
else{
    cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
}
}
return 0;
}
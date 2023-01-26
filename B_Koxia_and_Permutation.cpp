#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
ll n=a;
ll x=n;
for(int i=0;i<n/2;i++){
    cout<<n-i<<" "<<i+1<<" ";
}
if(n%2==1){
cout<<(n+1)/2<<endl;
}
else{
    cout<<endl;
}
}
return 0;
}
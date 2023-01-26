#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,m;
cin>>n>>m;
ll x=n/m;
ll count=0;
if(m%10!=0){
//cout<<x<<endl;
// ll b=x*m;
// cout<<(x*(m+b))/2<<endl;
ll sum=m;
for(int i=0;i<10;i++){
    count+=(sum%10);
    sum+=m;
}
sum=m;
// if(m%2==0){
//     count=40;
// }
// else{
//     count=45;
// }
count*=(x/10);
//cout<<count<<endl;
//if(x>10){
for(int i=0;i<x%10;i++){
    count+=sum%10;
    //cout<<count<<" ";
    sum+=m;
}

//}
}
else{
    count=0;
}
cout<<count<<endl;
}
return 0;
}
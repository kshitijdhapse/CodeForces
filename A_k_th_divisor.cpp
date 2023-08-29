#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll n,k;
cin>>n>>k;
ll i=1,count=0,x=i*i,stat=0;
vector<ll> v;
while(x<=n){ 
    if(n%i==0){
        v.push_back(i);
        count++;
        if(count==k){
            cout<<i<<endl;
            stat=1;
            break;
        }
    }
    i++;
    x=i*i;
}
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }   
if(stat==0){
ll y=(2*count)-k;
// cout<<y<<endl;
double o=sqrt(n);
ll p=sqrt(n);
if(y>=0){
if(p==o){
    if(y>0){
    ll r=n/v[y-1];
    cout<<r<<endl;
    }else{
        cout<<-1<<endl;
    }
}else{
    ll r=n/v[y];
    cout<<r<<endl;
}}else{
    cout<<-1<<endl;
}
}
return 0;
}
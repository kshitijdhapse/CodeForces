#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
vector<ll> v;
ll a,b;
cin>>a>>b;
ll p=0,q;
// if(b<=0){
// cout<<(abs(a)+abs(b))*2<<endl;
// for(ll i=0;i<(abs(a)+abs(b))*2;i++){
//     if(i%2==0){
//         v.push_back(0);
//         // cout<<0<<" ";
//     }
//     else if(p<abs(a)){
//         p++;
//         v.push_back(1);
//         // cout<<1<<" ";
//     }
//     else{
//         v.push_back(-1);
//         // cout<<-1<<" ";
//     }
// }
// swap(v[1],v[v.size()-1]);
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// }else{
    cout<<(a-b)*2<<endl;
    for(int i=b;i<=a;i++){
        cout<<i<<" ";
    }
    for(int i=a-1;i>=b+1;i--){
        cout<<i<<" ";
    }
// }
cout<<endl;
}
return 0;
}
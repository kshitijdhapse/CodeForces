#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll eve=0,odd=0;
for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x%2==0){
        eve+=x;
    }else{
        odd+=x;
    }
}
if(eve>odd){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
}
return 0;
}
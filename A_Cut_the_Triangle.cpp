#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll a1,b1,a2,b2,a3,b3;
cin>>a1>>b1>>a2>>b2>>a3>>b3;
if((a1==a2&&b2==b3)||(a1==a2&&b1==b3)||(a3==a2&&b1==b3)||(a2==a3&&b1==b2)||(a1==a3&&b2==b3)||(a1==a3&&b2==b1)){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}
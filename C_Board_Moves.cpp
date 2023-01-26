#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll sum=0;
ll x=(n+1)/2;
sum=(x/2)*(2*8+((x-2)*8));
cout<<sum<<endl;
// for(int i=0;i<n;i++){
//     sum+=(8*(i+1));
// }
}
return 0;
}
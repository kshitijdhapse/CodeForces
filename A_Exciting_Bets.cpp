#define ll long long 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll int t;
cin>>t;
while(t--){
ll int n,m;
cin>>n>>m;
ll int a=min(n,m);
ll int d=abs(n-m);
if(d!=0){
ll int e=min(a%d,abs(d-(a%d)));
ll int sum=min(e,n);
cout<<d<<" "<<sum<<endl;
}
else{
    cout<<0<<" "<<0<<endl;
}
}
return 0;
}
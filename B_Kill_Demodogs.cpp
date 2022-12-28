//REFER TO hi.cpp
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;

int main(){
ll t;
cin>>t;
while(t--){
ll n;
ll M = 1000000007;
cin>>n;
ll sum=0;
ll one =((((2*(n%M))%M)+1)%M);
ll two=(((n%M)%M)*(((n+1)%M)%M)%M);
ll z=(((two)*(one))/6)%M;
ll three=(((n%M)%M)*(((n+1)%M)%M)%M);
ll four=(n-1)%M;
ll y=((((three)*(four)))/3)%M;
sum=((z)+(y))%M;
ll x=((sum%M)*(2022%M))%M;
cout<<x<<endl;
}
return 0;
}

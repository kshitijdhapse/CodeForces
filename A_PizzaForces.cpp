#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll sum1=0,sum2=0,sum3=0;
if(n%2!=0){
    n++;
}
if(n<=6){
    cout<<15<<endl;
}else{
    cout<<(n*5)/2<<endl;
}
}
return 0;
}
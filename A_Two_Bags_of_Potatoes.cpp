#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){

ll a,b,c;
cin>>a>>b>>c;
ll x=b-(a%b);
int stat=0;
for(int i=x;i<=c-a;i+=b){
    cout<<i<<" ";
    stat=1;
}
if(stat==0){
    cout<<-1<<endl;
}
return 0;
}
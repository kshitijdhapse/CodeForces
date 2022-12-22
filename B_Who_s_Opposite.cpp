#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll a,b,c;
cin>>a>>b>>c;
ll k=abs(a-b);
if((c>=2*k||k==1)){
    cout<<-1<<endl;
}
else if(c<=k){
    cout<<c+k<<endl;
}
else{
    cout<<c-k<<endl;
}
}
return 0;
}
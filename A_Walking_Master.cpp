#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll a,b,c,d;
cin>>a>>b>>c>>d;
if(d<b){
    cout<<-1<<endl;
}else{
    ll sum=d-b;
    a+=d-b;
    if(a<c){
        cout<<-1<<endl;
    }
    else{
        sum+=a-c;
        cout<<sum<<endl;
    }
}

}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    if((a+b)%2!=0){
        cout<<-1<<" "<<-1<<endl;
    }else{
    ll x=(a+b)/2;
    ll s=x,y=0;
    for(int i=0;i<=max(a,b);i++){
        if(x==abs(a-s)+abs(b-y)){
            cout<<s<<" "<<y<<endl;
            break;
        }
        s--;
        y++;
    }
    }
}
return 0;
}
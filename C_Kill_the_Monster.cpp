#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll hc,hm,dc,dm;
cin>>hc>>dc>>hm>>dm;
ll k,w,a,stat=0;
cin>>k>>w>>a;
ll o=hc/dm;
if(hc%dm!=0){
    o++;
}
ll p=hm/dc;
if(hm%dc!=0){
    p++;
}
// cout<<o<<" "<<p<<endl;
if(o>=p){
    cout<<"YES"<<endl;
    stat=1;
}else{
    for(ll i=0;i<=k;i++){
            ll e=dc+(i*(w));
            ll f=hc+((k-i)*(a));
            ll o=f/dm;
            if(f%dm!=0){
                o++;
            }
            ll p=hm/e;
            if(hm%e!=0){
                p++;
            }
            if(o>=p){
                cout<<"YES"<<endl;
                stat=1;
                break;
            }
        }
    }
if(stat==0){
    cout<<"NO"<<endl;
}

}
return 0;
}
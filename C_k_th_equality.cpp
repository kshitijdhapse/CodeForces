#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll count=0,stat=0,p,q;
    // if(a==1){
    //     ll p=pow(10,a-1)+1;
    // }else{
    //     ll p=pow(10,a-1);
    // }
    // if(b==1){
    //     ll q=pow(10,b-1)+1;
    // }else{
    //     ll q=pow(10,b-1);
    // }
    for(int i=pow(10,a-1);i<=pow(10,a)-1;i++){
        for(int j=pow(10,b-1);j<=pow(10,b)-1;j++){
            if(i+j<=pow(10,c)-1&&i+j>=pow(10,c-1)){
                count++;
            }
            if(count==d){
                cout<<i<<" + "<<j<<" = "<<i+j<<endl;
                stat=1;
                break;
            }
        }
        if(stat==1){
            break;
        }
    }
    if(stat==0){
        cout<<-1<<endl;
    }
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll a,b;
    ll x1,y1,x2,y2;
    cin>>a>>b>>x1>>y1>>x2>>y2;
    if((x1==1&&y1==1)||(x2==1&&y2==1)||(x1==a&&y1==1)||(x1==1&&y1==b)||(x1==a&&y1==b)||(x2==1&&y2==b)||(x2==a&&y2==1)||(x2==a&&y2==b)){
        cout<<2<<endl;
    }else if(x1==1||x1==a||x2==1||x2==a||y1==1||y1==b||y2==1||y2==b){
        cout<<3<<endl;
    }else{
        cout<<4<<endl;
    }
    
    // cout<<min(min((x1+y1),(a-x1+b-y1+2)),min((x2+y2),(a-x2+b-y2+2)))<<endl;
}
return 0;
}
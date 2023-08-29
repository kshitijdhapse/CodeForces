#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,m,k;
    cin>>n>>m>>k;
    ll x,y;
    cin>>x>>y;
    // cout<<x<<" "<<y<<" "<<n<<" "<<m<<" "<<k<<endl;
    map<ll,ll> mp;
    int stat=0;
    for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;
        // cout<<x<<" "<<y<<" "<<a<<" "<<b<<endl;
        // cout<<abs(a-x)+abs(y-b)<<" ";
        if((abs(a-x)+abs(y-b))%2==0){
            stat=-1;
        }else{
            stat++;
        }
        // if((x+1==a&&y==b+1)||(x+1==a+1&&y==b)||(x+1==a-1&&y==b)||(x+1==a&&y==b-1)){
        //     cout<<"NO"<<endl;
        //     stat=1;
        //     break;
        // }else if((x==a&&y+1==b+1)||(x==a+1&&y+1==b)||(x==a-1&&y+1==b)||(x==a&&y+1==b-1)){
        //     cout<<"NO"<<endl;
        //     stat=1;
        //     break;
        // }else if((x==a&&y-1==b+1)||(x==a+1&&y-1==b)||(x==a-1&&y-1==b)||(x==a&&y-1==b-1)){
        //     cout<<"NO"<<endl;
        //     stat=1;
        //     break;
        // }else if((x-1==a&&y==b+1)||(x-1==a+1&&y==b)||(x-1==a-1&&y==b)||(x-1==a&&y==b-1)){
        //     cout<<"NO"<<endl;
        //     stat=1;
        //     break;
        // }
    }
    // cout<<stat<<endl;
    if(stat==k){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n,m,sx,sy,d;
    cin>>n>>m>>sx>>sy>>d;
    if((sx+d>=n&&sy+d>=m)||(sx-d<=1&&sy-d<=1)||(sx-d<=1&&sx+d>=n)||(sy+d>=m&&sy-d<=1)){
        cout<<-1<<endl;
    }else{
        cout<<m+n-2<<endl;
    }
}
return 0;
}
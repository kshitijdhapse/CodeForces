#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int a,b,c,d;
cin>>a>>b>>c>>d;
if(a==0){
    cout<<1<<endl;
}
else if(a+b+c+d==0){
    cout<<0<<endl;
}

else{
ll sum=0;
ll x=a;
ll y=a;
sum+=(a);
sum+=(2*min(b,c));
ll z=max(b,c)-min(b,c);
//cout<<x<<" "<<y<<" "<<z<<endl;
if(z>=y&&max(b,c)>0){
    sum+=y;
    x+=y;
    z-=y;
    y=0;  
}
else if(max(b,c)>0){
    sum+=z;
    y-=z;
    x+=z;
    z=0;
}
z+=d;
//cout<<x<<" "<<y<<" "<<z<<endl;
if(min(y,x)>=0&&z>0){
    sum+=min(min(x,y)+1,z);
}
// else{
//     sum+=d;
// }
cout<<sum<<endl;
}
}
return 0;
}
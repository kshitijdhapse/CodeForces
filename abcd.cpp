#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
   
   ll t;cin>>t;
   while(t--){
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
   ll x,y;ll ans;
  if(c==0 && b==0 && a>d)cout<<a+d<<endl;
  else if(a==0)cout<<1<<endl;
   else{
   if(abs(b-c)>a){
       if(c>b){
           ans=a+b+a+b;
       }
       else ans=a+c+a+c;
       cout<<ans+1<<endl;
   }
   else{
       if(b>c){
           x=a+(b-c);
           y=a-(b-c);
           ll maxi=min(x,y);
           ll mini=min(d,maxi+1);
           int ans=a+b+c+mini;
           cout<<ans<<endl;        
       }
       else{
           x=a-(c-b);
           y=a+(c-b);     
           ll maxi=min(x,y);
           ll mini=min(d,maxi+1);
           int ans=a+b+c+mini;
           cout<<ans<<endl;
       }
   }
   }
     
     
   }
return 0;
}
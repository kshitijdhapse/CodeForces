#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long int a,b,c,x,y,stat1=0,stat2=0;
cin>>a>>b>>c>>x>>y;
if(b-y+(a-x+c)<0||b-y+c<0||a-x+c<0)
{
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}

}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
if(b%a!=0)
{
    cout<<0<<" "<<0<<endl;
}
else{
    cout<<1<<" "<<b/a<<endl;
}
}
return 0;
}
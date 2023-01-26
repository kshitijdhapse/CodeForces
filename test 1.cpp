#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t=999966000289,count=0;
for(ll i=2;i<t;i++){
//cout<<t%i<<endl;
if(t%i==0){
count++;
}
if(count==1){
    cout<<i<<endl;
    break;
}
}
return 0;
}
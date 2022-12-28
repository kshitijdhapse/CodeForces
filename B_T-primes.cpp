#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll a;
cin>>a;
ll count=0;
for(int i=1;i<=a;i++){
    if(a%i==0){
        count++;
    }
    if(count==3&&i!=a){
        count++;
        break;
    }
}
if(count==3){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
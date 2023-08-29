#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll a,b;
    cin>>a>>b;
    if(a>b){
        swap(a,b);
    }
    if(a*3<=b){
        cout<<a<<endl;
    }else{
        cout<<int((a+b)/4)<<endl;
    }
}
return 0;
}
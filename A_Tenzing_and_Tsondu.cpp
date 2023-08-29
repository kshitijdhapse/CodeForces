#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    ll c=0,d=0,o;
    for(int i=0;i<a;i++){
        
        cin>>o;
        c+=o;
    }
    for(int i=0;i<b;i++){
        
        cin>>o;
        d+=o;
    }
    if(c>d){
        cout<<"Tsondu"<<endl;
    }else if(c==d){
        cout<<"Draw"<<endl;
    }else{
        cout<<"Tenzing"<<endl;
    }
}
return 0;
}
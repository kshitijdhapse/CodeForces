#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int x=1;
int count=0;
if(((n)&(n-1))!=0){
    count=1;
    while(n){
        n = n >> 1;
        count++;
    }
    //cout<<1<<" "<<count<<endl;
    if(count%2==0){
        cout<<"Richard"<<endl;
    }
    else{
        cout<<"Louise"<<endl;
    }
}
else{
    while(n){
        n = n >> 1;
        count++;
    }
    //cout<<2<<" "<<count<<endl;
    if(count%2==0){
        cout<<"Richard"<<endl;
    }
    else{
        cout<<"Louise"<<endl;
    }
}
}
return 0;
}
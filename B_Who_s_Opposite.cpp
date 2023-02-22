#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;

while(t--){
ll a,b,c;
cin>>a>>b>>c;
if(a<b){
swap(a,b);
}
ll k=abs(a-b);
ll p=k+c,q=k-c;
if(c>a&&q>b){
    cout<<q<<endl;
}
else if(c<a&&q<b){
    cout<<b<<endl;
}
else if(c<b&&p<a){
    cout<<p<<endl;
}
else if(c>b&&p>a){
    cout<<p<<endl;
}
else{
    cout<<-1<<endl;
}
}
return 0;
}
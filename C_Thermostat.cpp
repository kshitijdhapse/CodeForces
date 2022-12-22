#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int l,r,x;
cin>>l>>r>>x;
int b,a;
cin>>a>>b;
int d=b-a;
if(a==b){
    cout<<0<<endl;
}
else if((a+x>r&&a-x<l)||(l+x>b)&&(r-x<b)){
    cout<<-1<<endl;
}
else if(abs(a-b)>=x){
    cout<<1<<endl;
}
else if(abs(a-b)<x){
   // cout<<a-(x)<<" "<<a+x<<" "<<a+(x)<<" "<<a-(x)<<endl;
    if((abs(l-b)>=x&&abs(a-l)>=x)||(abs(b-r)>=x&&abs(a-r)>=x)){
        cout<<2<<endl;
    }
    
    else{
        cout<<3<<endl;
    }
}
}
return 0;
}
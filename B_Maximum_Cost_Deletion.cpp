#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,a,b;
cin>>n>>a>>b;
string s;
cin>>s;
ll count=0,stat=0,one=0,zero=0,stat1=0;
for(int i=0;i<n;i++){
    if(s[i]=='0'){
        count++;
    }
    if(s[i]=='0'&&stat==0){
        stat=1;
        stat1=0;
        zero++;
    }
    else{
        if(stat1==0&&s[i]=='1'){
        one++;
        stat1=1;
        stat=0;
        }
    }
}
//cout<<one<<" "<<zero<<endl;
if(b>=0){
    cout<<(b+a)*n<<endl;
}
else{
    if(zero<one){
    cout<<(count*a)+(b*zero)+((n-count)*a)+b<<endl;
    }
    else{
    cout<<((n-count)*a)+(b*one)+((count)*a)+b<<endl;
    }
}
}
return 0;
}
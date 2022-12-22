#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
string a,b;
int stat=0;
for(int i=0;i<n-1;i++){
    a=s[i];
    a+=s[i+1];
    for(int j=i+2;j<n-1;j++){
        b=s[j];
        b+=s[j+1];
        //cout<<a<<" "<<b<<endl;
        if(a==b){
            cout<<"YES"<<endl;
            stat=1;
            break;
        }
        
    }
    if(stat==1){
            break;
        }
}
if(stat==0){
    cout<<"NO"<<endl;
}
}
return 0;
}
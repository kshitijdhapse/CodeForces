#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string s;
cin>>s;
ll n=s.length();
ll x=0,o=n-2,p=-1;
for(int i=0;i<n-1;i++){
    if(9<int(s[i])+int(s[i+1])-(2*int('0'))){
        x=int(s[i])+int(s[i+1])-(2*int('0'));
        p=i;
        //break;
    }
}
if(x==0){
    for(int i=0;i<n-1;i++){
        if(s[i]==0&&s[i+1]!=0){
            p=i;
            x=int(s[i])+int(s[i+1])-(2*int('0'));
        }
    }
    if(p==-1){
    p=0;
    int i=0;
    x=int(s[i])+int(s[i+1])-(2*int('0'));
    }
}
for(int i=0;i<n;i++){
    if(i==p){
        cout<<x;
        i++;
    }
    else{
        cout<<s[i];
    }
}
cout<<endl;
}
return 0;
}
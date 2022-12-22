#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
ll one=0,zero=0;
for(int i=0;i<n;i++){
    if(s[i]=='1'){
        one++;
    }
    else{
        zero++;
    }
}
for(ll i=pow(2,one);i<=pow(2,n)-pow(2,zero)+1;i++){
    cout<<i<<" ";
}

return 0;
}
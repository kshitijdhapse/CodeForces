#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll o=9;
    string s;
    while(n>=o){
        n-=o;
        if(o<=0){
            break;
        }
        s+=to_string(o--); 
    }
    if(n>0){
    s+=to_string(n);
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    
}
return 0;
}
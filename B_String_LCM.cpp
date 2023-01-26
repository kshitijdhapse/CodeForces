#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string a,b;
cin>>a>>b;
int stat=0;
int n=a.length();
int m=b.length();
if(m<n){
    swap(a,b);
}
string k,l;
//if(m>n){
    string s=a+b;
    while(k!=a+b){
    if(k!=b){
        if(k.length()<b.length()){
            k+=a;
        }
        else{
            l+=b;
        }
    }
    else{
        cout<<b<<endl;
        stat=1;
        break;
    }
    }
    if(stat==0){
        cout<<-1<<endl;
    }
//}
}
return 0;
}
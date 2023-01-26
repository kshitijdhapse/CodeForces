#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
if(a<=b){
    if(b%a==0){
        cout<<b/a<<endl;
    }
    else{
        cout<<(b/a)+1<<endl;
    }
}
else{
    if(a%b==0){
        b*=(a/b);
    }
    else{
        b*=((a/b)+1);
    }
    if(a<=b){
    if(b%a==0){
        cout<<b/a<<endl;
    }
    else{
        cout<<(b/a)+1<<endl;
    }
}
}
}
return 0;
}
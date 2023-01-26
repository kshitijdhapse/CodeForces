#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){

int n,m,a,b;
cin>>n>>m>>a>>b;
//double x=b/m;
if(b>m*a){
    cout<<a*n<<endl;
}
else{
    ll rem=(n%m);
    if(rem*a>b){
        cout<<((n/m)+1)*b<<endl;
    }
    else{
        cout<<((n/m)*b)+(rem*a)<<endl;
    }
}
return 0;
}
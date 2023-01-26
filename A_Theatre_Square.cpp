#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll a,b,c;
cin>>a>>b>>c;
ll sum=0,sum1=0;
if(a%c==0){
    sum=a/c;
}
else{
    sum=(a/c)+1;
}
if(b%c==0){
    sum1=b/c;
}
else{
    sum1=(b/c)+1;
}
cout<<sum*sum1<<endl;
return 0;
}
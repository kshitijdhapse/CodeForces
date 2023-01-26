#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll a,b;
cin>>a>>b;
ll count=0;
while(a<=b){
a*=3;
b*=2;
count++;
if(a>b){
    cout<<count<<endl;
    break;
}
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(b>=a*(c*(c+1))/2){
    cout<<0<<endl;
}
else{
    cout<<(a*((c)*(c+1))/2)-b<<endl;
}
return 0;
}
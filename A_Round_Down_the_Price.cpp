#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string n;
cin>>n;
ll x=stoi(n);
ll f=(int(x)-stoi("0")-pow(10,n.size()-1));
cout<<f<<endl;
}
return 0;
}
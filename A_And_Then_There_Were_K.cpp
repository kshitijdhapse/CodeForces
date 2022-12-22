//#define long long ll;
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
long long n,a=1;
cin>>n;
while(a<=n)
{
    a=a*2;
}

cout<<(a/2)-1<<endl;
}
return 0;
}
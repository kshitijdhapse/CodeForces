#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string s="3141592653589793238462643383279";
string a;
cin>>a;
ll count=0;
for(int i=0;i<a.length();i++){
    if(s[i]==a[i]){
        count++;
    }
    else{
        break;
    }
}
cout<<count<<endl;
}
return 0;
}
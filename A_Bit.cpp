#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
int n=0;
while(t--){
string s;
cin>>s;

if(s[0]=='X'){
    if(s[1]=='+'){
        n++;
    }
    else{
        n--;
    }
}
else{
    if(s[1]=='+'){
        n++;
    }
    else {
        n--;
    }
}}
cout<<n<<endl;
return 0;
}
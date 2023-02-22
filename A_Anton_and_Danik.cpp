#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll n;
cin>>n;
string s;
cin>>s;
ll a=0,d=0;
for(int i=0;i<n;i++){
    if(s[i]=='A'){
        a++;
    }
    else{
        d++;
    }
}
if(a>d){
    cout<<"Anton"<<endl;
}
else if(a==d){
    cout<<"Friendship"<<endl;
}
else{
    cout<<"Danik"<<endl;
}
return 0;
}
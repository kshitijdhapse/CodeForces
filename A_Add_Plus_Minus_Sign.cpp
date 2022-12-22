#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
char sum=s[0];
for(int i=1;i<n;i++){
    if(sum=='1'&&s[i]=='1'){
        sum='0';
        cout<<'-';
    }
    else if(sum=='0'&&s[i]=='1'){
        sum='1';
        cout<<'+';
    }
    else if( sum=='1'&&s[i]=='0'){
        sum='1';
        cout<<'+';
    }
    else{
        sum='0';
        cout<<'+';
    }
}
cout<<endl;
}
return 0;
}
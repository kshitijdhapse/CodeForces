#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int stat=0;
if(stoi(s)%4==0||stoi(s)%7==0||stoi(s)%47==0||stoi(s)%74==0||stoi(s)%44==0||stoi(s)%77==0||stoi(s)%444==0||stoi(s)%777==0||stoi(s)%447==0||stoi(s)%774==0||stoi(s)%477==0||stoi(s)%744==0||stoi(s)%474==0||stoi(s)%747==0){
    cout<<"YES"<<endl;
    stat=1;
}

if(stat==0){
    ll count=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='4'||s[i]=='7'){
        count++;
        break;
    }
}
if(count==s.length()){
    cout<<"YES"<<endl;
    stat=1;
}
}

if(stat==0){
    cout<<"NO"<<endl;
}
return 0;
}
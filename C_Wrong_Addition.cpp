#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string a,b,c;
int stat=0;
cin>>a>>b;
ll diff=b.length()-a.length();
if(diff<0){
    cout<<-1<<endl;
}
else if(a==b){
    cout<<0<<endl;
}
else{
    ll x=a.length(),y=b.length()-1;
    for(int i=x-1;i>=0;i--){
        if(a[i]>b[y]&&y>0){
            string s="";
            s+=b[y-1];
            s+=b[y];
            //cout<<s<<endl;
            if((stoi(s)>18||stoi(s)<=0)||stoi(s)<int(a[i])-int('0')){
                stat=1;
                break;
            }
            y--;
            c=(to_string((stoi(s))-int(a[i])+int('0')))+c;
        }
        else{
            c=(to_string(-int(a[i])+int(b[y])))+c;
        }
        y--;
    }
    for(int i=y;i>=0;i--){
        c=b[i]+c;
    }

//cout<<c<<endl;
if(stat==0&&c[0]!='-'){
if(c[0]=='0'){
ll l;
for(int i=0;i<c.length();i++){
if(c[i]!='0'){
    l=i;
    break;
}
}
for(int i=l;i<c.length();i++){
    cout<<c[i];
}
cout<<endl;
}
else{
    cout<<c<<endl;
}
}
else{
    cout<<-1<<endl;
}
}
}
return 0;
}
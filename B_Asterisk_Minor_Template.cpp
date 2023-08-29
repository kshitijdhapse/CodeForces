#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string a,b;
cin>>a>>b;
int n=a.length();
int m=b.length();
string s="";
int stat=0,stat1=0;
if(a[0]==b[0]||a[n-1]==b[m-1]){
    cout<<"YES"<<endl;
    if(a[0]==b[0]){
        cout<<a[0]<<'*'<<endl;
    }else{
        cout<<'*'<<a[n-1]<<endl;
    }
}
else{
for(int i=0;i<n-1;i++){
    for(int j=0;j<m-1;j++){
        string x;
        x+=a[i];x+=a[i+1];
        string y;
        y+=b[j];y+=b[j+1];
        if(x==y){
            s+=x;
            stat=1;
            break;
        }
    }
    if(stat==1){
        break;
    }
}

if(s!=""){
    cout<<"YES"<<endl;
cout<<'*'<<s<<'*'<<endl;
}else{
    cout<<"NO"<<endl;
}
}
}
return 0;
}
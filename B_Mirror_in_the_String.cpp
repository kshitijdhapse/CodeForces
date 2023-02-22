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
int p=-1;
int stat=0;
for(int i=0;i<n-1;i++){
    if(s[i]>s[i+1]){
        p=i;
        stat=1;
    }else if(s[i]==s[i+1]&&stat==1){
        p=i;
    }
    else{
        break;
    }
}
for(int i=0;i<=p+1;i++){
    cout<<s[i];
}
for(int i=p+1;i>=0;i--){
    cout<<s[i];
}
cout<<endl;
}
return 0;
}
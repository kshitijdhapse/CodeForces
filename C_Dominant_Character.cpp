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
string r;
int stat=0;
if(n==1){
    if(s=="a"){
        cout<<1<<endl;
        continue;
    }
}
int count=INT_MAX;
// for(int i=0;i<s.length();i++){
//     r="";
//     for(int j=0;j<4;j++){
//         r+=s[i+j];
        if(s.find("aa")!= string::npos){
            stat=1;
            // count=2;
            cout<<2<<endl;
            // break;
            continue;
        }else if(s.find("aba")!= string::npos){
            stat=1;
            cout<<3<<endl;
            continue;

        }else if(s.find("aca")!= string::npos){
            cout<<3<<endl;
            continue;
        }else if(s.find("abca")!= string::npos){
            stat=1;
            // count=min(count,4);
            cout<<4<<endl;
            continue;
            // break;
        }else if(s.find("acba")!= string::npos){
            stat=1;
            // count=min(count,4);
            cout<<4<<endl;
            continue;
            // break;
        }else if(s.find("abbacca")!= string::npos){
            stat=1;
            cout<<"7"<<endl;
            continue;
        }else if(s.find("accabba")!= string::npos){
            stat=1;
            cout<<"7"<<endl;
            continue;
        }
if(stat==0){
    cout<<-1<<endl;
}
    
}
return 0;
}
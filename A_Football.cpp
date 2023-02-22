#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int zer=0,one=0,omx=0,zmx=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='0'){
        if(omx<one){
        omx=max(omx,one);
        
        }
        one=0;
        zer++;
        if(i==s.length()-1){
        if(zmx<zer){
        zmx=max(zmx,zer);
        zer=0;
        }    
        }
    }else{
        if(zmx<zer){
        zmx=max(zmx,zer);
        
        }
        zer=0;
        one++;
        if(i==s.length()-1){
        if(omx<one){
        omx=max(omx,one);
        one=0;
        }    
        }
    }
    // cout<<omx<<" "<<zmx<<endl;
}
if(zmx>=7||omx>=7){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
string s="qwertyuiopasdfghjkl;zxcvbnm,./";
char c;
string a;
cin>>c>>a;

if(c=='R'){
    for(int i=0;i<a.length();i++){
        for(int j=0;j<s.length();j++){
        if(a[i]==s[j]){
            if((j)%10==0){
                cout<<s[j];
            }
            else{
                cout<<s[j-1];
            }
        }
        }
    }
}
else{
    for(int i=0;i<a.length();i++){
        for(int j=0;j<s.length();j++){
        if(a[i]==s[j]){
            if((j+1)%10==0){
                cout<<s[j];
            }
            else{
                cout<<s[j+1];
            }
        }
        }
    
}
}
return 0;
}
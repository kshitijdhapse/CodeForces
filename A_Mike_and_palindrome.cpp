#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string rs=s;
    ll cnt=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]!=rs[i]){
            cnt++;
        }
    }
    if(s.length()%2==0){
    if(cnt>2||cnt<1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    }else{
    if(cnt>2){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }    
    }
return 0;
}
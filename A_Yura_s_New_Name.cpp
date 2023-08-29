#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    ll count=0;
    if(s[0]=='_'){
        count++;
    }
    if(s[s.length()-1]=='_'){
        count++;
    }
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]&&s[i]=='_'){
            count++;
        }
    }
    if(s.length()==1&&s[0]=='^'){
        count=1;
    }
    cout<<count<<endl;
}
return 0;
}
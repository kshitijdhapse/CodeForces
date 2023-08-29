#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<s.length();j++){
            if(j==i){
                cout<<(char(int(s[j])-97+65));
            }else{
                cout<<s[j];
            }
        }
        cout<<endl;
    }
}
return 0;
}
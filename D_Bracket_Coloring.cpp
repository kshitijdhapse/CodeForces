#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    stack<char> st;
    int stat1=0,stat2=0;
    map<int,int> v;
    for(int i=0;i<n;i++){
        if(st.empty()){
            if(s[i]=='('){
                st.push(s[i]);
                stat1=1;
                stat2=0;
            }
            else{
                v[i]++;
                st.push(s[i]);
                stat1=0;
                stat2=1;
            }
        }else{
            if(stat1==1){
                if(st.top()=='('&&s[i]!=')'){
                    st.push(s[i]);
                }else if(st.top()=='('&&s[i]==')'){
                    st.pop();
                }
                // else{
                //     v[i]++;
                // }
            }else if(stat2==1){
                v[i]++;                
                if(st.top()==')'&&s[i]!='('){
                    st.push(s[i]);
                }else if(st.top()==')'&&s[i]=='('){
                    st.pop();
                }
                
            }
        }
    }
    if(!st.empty()){
        cout<<-1<<endl;
        continue;
    }
    if(v.size()%n==0){
        cout<<1<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<endl;
        continue;
    }else{
        cout<<2<<endl;
    }
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            cout<<2<<" ";
        }else{
            cout<<1<<" ";
        }
    }
    cout<<endl;
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll n,stat=0;
cin>>n;
string a;
cin>>a;
stack<char> s;
for(int i=0;i<n;i++){
    if((a[i]=='(')||(s.size()==0)){
        s.push(a[i]);
        // cout<<a[i]<<" ";
    }
    else if(a[i]==')'){
        if(s.top()=='('){
            s.pop();
        }else{
            stat=1;
            cout<<"No"<<endl;
            break;
        }
    }
}
// cout<<s.size()<<endl;
if(s.size()==2){
    char a=s.top();
    s.pop();
    if(a=='('&&s.top()==')'){
        cout<<"Yes"<<endl;
        stat=1;
    }else{
        cout<<"No"<<endl;
        stat=1;
    }
}else if((s.size()==1||s.size()>=3)&&stat!=1){
    cout<<"No"<<endl;
    stat=1;
}
if(stat==0){
    cout<<"Yes"<<endl;
}
return 0;
}
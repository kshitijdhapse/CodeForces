#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
string b;
cin>>a>>b;
ll rem;
if(stoi(b)%9==0){
    rem=stoi(b)/9;
}
else if(stoi(b)%9!=0){
    rem=(stoi(b)/9)+1;
}
ll dif=abs(a-rem);
ll difrem,r;
r=dif%9;
if(dif%9==0){
    difrem=dif/9;
}
else{
    difrem=(dif/9)+1;
}
if(stoi(b)!=0&&stoi(b)<=9*a){
    string o,str;
    if(dif==0){
        o=b;
        while(o.length()>=1){
            if(o.length()==1){
                str+=o;
                break;
            }
            else{
                o=to_string(stoi(o)-9);
                str+="9";
            }
        }
        reverse(str.begin(),str.end());
        cout<<str<<" ";
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
    else{
        cout<<1;
        for(int i=0;i<dif-1;i++){
            cout<<0;
        }
        if((stoi(b)-1)%9==0&&(stoi(b)-1)>0){
            cout<<0;
        }
        o=to_string(stoi(b)-1);
        while(o.length()>=1){
            if(o.length()==1){
                str+=o;
                break;
            }
            else{
                o=to_string(stoi(o)-9);
                str+="9";
            }
        }
        reverse(str.begin(),str.end());
        cout<<str<<" ";
        o=to_string(stoi(b));
        str="";
        while(o.length()>=1){
            if(o.length()==1){
                str+=o;
                break;
            }
            else{
                o=to_string(stoi(o)-9);
                str+="9";
            }
        }
        cout<<str;
        for(int i=0;i<dif;i++){
            cout<<0;
        }
        cout<<endl;
    }
}
else if(stoi(b)==0&&a==1){
    cout<<0<<" "<<0<<endl;
}
else{
    cout<<-1<<" "<<-1<<endl;
}
return 0;
}
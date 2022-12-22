#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string a1,a2;
ll b1,b2;
ll stat=0;
cin>>a1>>b1>>a2>>b2;
if(a1.length()+b1>a2.length()+b2){
    cout<<">"<<endl;
}
else if(a1.length()+b1<a2.length()+b2){
    cout<<"<"<<endl;
}

else{
    ll a=abs(a1.length()-a2.length());
        if(a1.length()<a2.length()){
        for(int i=0;i<a;i++){
            a1+='0';
        }
        }
        else if(a1.length()>a2.length()){
         for(int i=0;i<a;i++){
            a2+='0';
        }   
        }
        // for(ll i=0;i<a1.length();i++){
        //     if(a1[i]>a2[i]){
        //         cout<<">"<<endl;
        //         stat=1;
        //         break;
        //     }
        //     else if(a1[i]<a2[i]){
        //         cout<<"<"<<endl;
        //         stat=1;
        //         break;
        //     }
        // }
        if(a1>a2){
            cout<<">"<<endl;
        }
        else if(a1<a2){
            cout<<"<"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
}
}
return 0;
}
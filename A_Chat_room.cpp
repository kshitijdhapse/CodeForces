#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
string x;
string k="hello";
char c='h',l='h';
int j=0,count=0;
for(int i=0;i<s.length();i++){
    if(s[i]==c){
        j++;
        c=k[j];
        l=k[j-1];
        count++;
        //cout<<count<<" ";
        if(count==5){
            break;
        }
    }
    else if(s[i]==l)
    {
        c=k[j];
        l=k[j-1];
    }
    // else{
    //     //cout<<"ELSE"<<endl;
    //     j=0;
    //     c=k[j];
    //     l=k[j];
    //     count=0;
    //     if(s[i]==c){
    //     j++;
    //     c=k[j];
    //     l=k[j-1];
    //     count++;
    //     // //cout<<count<<" ";
    //     // if(count==5){
    //     //     break;
    //     // }
    // }
    //}
}
if(count==5){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
return 0;
}
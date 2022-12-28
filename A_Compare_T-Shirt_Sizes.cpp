#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
string a,b;
cin>>a>>b;
int count1=0,count2=0;
for(int i=0;i<a.length();i++){
    if(a[i]=='X'){
        count1++;
    }
    if(a[i]=='S'){
        count1++;
        count1=-1*count1;
    }
    else if(a[i]=='M'){
        count1=0;
    }
    else{
        count1++;
    }
}
for(int i=0;i<b.length();i++){
    if(b[i]=='X'){
        count2++;
    }
    if(b[i]=='S'){
        count2++;
        count2=-1*count2;
    }
    else if(b[i]=='M'){
        count2=0;
    }
    else{
        count2++;
    }
}
if(count1>count2){
    cout<<">"<<endl;
}
else if(count1<count2){
    cout<<"<"<<endl;
}
else{
    cout<<"="<<endl;
}
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
int count=0;
for(int i=0;i<n;i++){
    if(s[i]=='0'){
        count++;
    }
}
if(count%2==0&&count>=2){
if(((count)/2)%2==0){
    cout<<"BOB"<<endl;
}
else{
    cout<<"BOB"<<endl;
}
}
else if(count%2!=0&&count>=2){
 if(((count-1)/2)%2==0){
    cout<<"ALICE"<<endl;
}
else{
    cout<<"ALICE"<<endl;
}   
}
else if(count==0){
    cout<<"DRAW"<<endl;
}
else if(count==1){
    cout<<"BOB"<<endl;
}
}
return 0;
}
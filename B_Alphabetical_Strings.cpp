#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
string a="abcdefghijklmnopqrstuvwxyz";
while(t--){
string s;
cin>>s;
string c=s;
sort(s.begin(),s.end());
//cout<<a.find(s)<<endl;
int stat=0,e=0;
if(a.find(s)==0&&s[0]=='a'){
    for(int i=0;i<c.length()-1;i++){
        if(c[i]!='a'){
            if(c[i]<c[i+1]&&stat==0){
                cout<<"NO"<<endl;
                e=1;
                break;
            }
            else if(stat==1&&c[i]>c[i+1]){
                cout<<"NO"<<endl;
                e=1;
                break;
            }
        }
        else{
             stat=1;   
        }
    }
    if(e==0)
    {cout<<"YES"<<endl;}
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
//sanku
//ankita
//sanku
//anku
//shitij
//prassu
//abhyaas kar ghari jaychay na
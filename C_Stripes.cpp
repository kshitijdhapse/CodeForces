#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n=8;
string s[n];
for(int i=0;i<n;i++)
{
cin>>s[i];
}
int A=0,B=0;
for(int i=0;i<n;i++)
{
if(s[i]=="RRRRRRRR")
{
    A++;
    break;
}

}

string q;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        q+=s[j][i];
     //   cout<<q<<endl;
    }
    //cout<<"HI"<<endl;
    if(q=="BBBBBBBB")
    {
        B++;
        break;
    }
  // cout<<q<<endl;
    q="";
}
//cout<<A<<" "<<B<<endl;
if(A>0)
{
    cout<<"R"<<endl;
}
else
{
cout<<"B"<<endl;
}
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n;
cin>>n;
char a;
cin>>a;
string s;
cin>>s;
int b=0,c,min=INT_MAX;
if(a=='g')
{
    cout<<0<<endl;
    //break;
}
else if(a=='r')
{
for(int i=0;i<n;i++)
{
    if(s[i]=='r')
    {
    b=i+1;
    }
    if(s[i]=='g')
    {
        c=i+1;
    }
    if(b<c)
    {
        if(min>abs(b-c))
        {
            min=b-c;
        }
    }
}
}
else if(a=='y')
{
for(int i=0;i<n;i++)
{
    if(s[i]=='y')
    {
    b=i+1;
    }
    if(s[i]=='g')
    {
        c=i+1;
    }
    if(b<c)
    {
        if(min>abs(b-c))
        {
            min=b-c;
        }
    }
}
cout<<min<<endl;

}
}
return 0;
}
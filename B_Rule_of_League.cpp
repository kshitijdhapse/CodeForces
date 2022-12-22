#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,x,y;
cin>>n>>x>>y;
int a,b;
if(x>=y)
{
    a=x;
    b=y;
}
else
{
    b=x;
    a=y;
}
if((n-1)%(max(x,y))==0&&min(x,y)==0)
{
int i=1;
while(i<n)
{
    for(int j=0;j<max(x,y);j++)
    {
        cout<<i<<" ";
    }
    i=i+max(x,y)+1;
}
cout<<endl;
}
else 
{
    cout<<-1<<endl;
}

}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int x,y,a,b;
cin>>x>>y>>a>>b;
int p=(a-x),q=(b-y);
// cout<<p<<" "<<q<<endl;
int sum=0;
double dist=sqrt(pow(x-a,2)+pow(y-b,2));
sum+=int(dist/(2*n));
double u=(2*n)*(int(dist/(2*n)));
dist-=u;
if(dist>2*n){
    sum+=2;
}else if(dist!=0){
    sum+=1;
}
cout<<sum<<endl;
return 0;
}
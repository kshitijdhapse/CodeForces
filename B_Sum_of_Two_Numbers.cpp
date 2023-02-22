#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll x;
cin>>x;
ll n=x;
ll sum=0,sum1=0,count=0;
while(n>0)    
{    
ll m=n%10;    
sum=sum+m;  
n=n/10;    
}  
n=x;
while(n>0)    
{    
ll m=n%10;    
if(m==9){
    count++;
}  
else{
    break;
}
n=n/10;    
}  
if(x%2==0){
    cout<<x/2<<" "<<x/2<<endl;
}
else{
    if(x%10==9){
        ll count=0;
    while(n>0){
        ll m=n%10;    
        if(m%2==1){
            count++;
            
        }  
        else{
            break;
        }
        n=n/10; 
    }
    
    }
    else{
        cout<<(x/2)+1<<" "<<(x/2)<<endl;
    }
}
}
return 0;
}
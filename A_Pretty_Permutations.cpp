#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,sum;
cin>>n;
if(n%2==0)
{
    for(int i=1;i<=n;i=i+1)
    {
        if(i%2==0)
        {
            cout<<i-1<<" ";
        }
        else{
            cout<<i+1<<" ";
        }
        // if(i>=n/2&&(n/2)%2==1)
        // {
        //     cout<<i+2<<" "<<i+1<<" ";
        // }
    }
    cout<<endl;
}
else{
    for(int i=1;i<=(n-3);i=i+1)
    {
        if(i%2==0)
        {
            cout<<i-1<<" ";
        }
        else{
            cout<<i+1<<" ";
        }
        // if(i>=(n-3)/2&&((n-3)/2)%2==1)
        // {
        //     cout<<i+2<<" "<<i+1<<" ";
        // }
    }
    cout<<n<<" "<<n-2<<" "<<n-1<<endl;
}
}
return 0;
}
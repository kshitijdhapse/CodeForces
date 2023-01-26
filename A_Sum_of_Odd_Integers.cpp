#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int i=1,sum=0;
while(sum<=n){
    sum+=i;
    i+=2;
}
//cout<<(i-2)/2<<endl;
if(n>=k&&(i-2)/2>=k){
if(n%2==0){
    if(k%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
else{
    if(k%2==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
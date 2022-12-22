#define ll long long int
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n,a;
cin>>n>>a;
ll sum=1;
ll i=1,j=0;
while(a>=sum){
sum+=i;
//cout<<sum<<endl;
i++;
}
j=i-1;
j=n-j;
cout<<j<<endl;
ll k=1;
sum=0;
for(int i=0;i<n;i++){
    if(i+1<=(j+1)/2){
        cout<<i+1<<" ";
        sum++;
    }
    else if(sum+k+1<=a&&n-(k+1)-j>=0){
        sum+=k;
        cout<<sum<<" ";
        k++;
    }
    else {
        cout<<++sum<<" ";
    }
}
cout<<endl;
}
return 0;
}
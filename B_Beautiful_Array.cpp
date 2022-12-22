#define ll long long int
#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
	ll n,k,b,s;
    cin>>n>>k>>b>>s;
  //  cout<<b*k<<" "<<((b*k)+((n-1)*(k-1)))<<endl;
  if((s>=b*k&&s<=((b*k)+((n)*(k-1))))||(s==0&&b==0))
    {
    for(int i=0;i<n;i++){
    if(i==0){
    if(s>=(b*k)+k-1){
    cout<<(b*k)+k-1<<" ";
    }
    else{
        cout<<s<<" ";
    }
    s=s-((b*k)+k-1);
    }
    else {
    
    if(s>=k-1){
    cout<<k-1<<" ";
    s=s-k+1;
    }
    else{
        if(s>=0){
            cout<<s<<" ";
            s=-1;
        }
        else{
            cout<<0<<" ";
        }
    
    }
    }
}}
else{
    cout<<-1;
}
cout<<endl;
}
  return 0;
}
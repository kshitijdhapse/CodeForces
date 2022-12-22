#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
string s,a;
cin>>s;
a=s;
sort(s.begin(),s.end());
int count=0;
for(int i=0;i<n;i++){
    if(a[i]!=s[i]){
        count++;
    }
}
cout<<count<<endl;
}

return 0;
}
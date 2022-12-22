#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
string s;
cin>>s;
int count=1,sum=0;
for(int i=0;i<n;i++){
    if(s[i]==s[i+1]){
        count++;
        if(i==n-1){
        sum+=count-1;
        count=1;    
        }
    }
    else{
        sum+=count-1;
        count=1;
    }
}
    cout<<sum<<endl;
return 0;
}
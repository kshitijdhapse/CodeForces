#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=1,j=0;
    string a;
    while(i<n){
        if(s[j]==s[i]){
            a+=s[j];
            j=i+1;
            i++;
        }
        i++;
    }
    cout<<a<<endl;
}
return 0;
}
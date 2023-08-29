#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll n,k;
cin>>n>>k;
string s;
cin>>s;
ll count=0;
for(int i=0;i<k;i++){
    int a;
    cin>>a;
    if(a==1){
        if(count%2==1){
            reverse(s.begin(),s.end());
            count=0;
        }
        int b,c;
        cin>>b>>c;
        swap(s[b-1],s[c-1]);

    }else{
        count++;
        if(i==k-1){
            if(count%2==1){
            reverse(s.begin(),s.end());
            count=0;
        }   
        }
    }
}
cout<<s<<endl;
return 0;
}
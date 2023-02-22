#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
ll n;
char a;
cin>>n>>a;
char arr[n];
map <char,ll> mp;
for(int i=0;i<n;i++){
    cin>>arr[i];
    mp[arr[i]]++;
}

        if(mp.size()==1&&mp[a]!=0){
            cout<<0<<endl;
        }
        else{
            ll in=-1;
            for(int i=((n)/2);i<n;i++){
                if(arr[i]==a){
                    in=i;
                    break;
                }
            }
            if(in!=-1){
                cout<<1<<endl;
                cout<<in+1<<endl;
            }
            else{
                cout<<2<<endl;
                cout<<n-1<<" "<<n<<endl; 
            }
        }
    }
return 0;
}
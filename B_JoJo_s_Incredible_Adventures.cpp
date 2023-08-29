// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll count=0,m=0,stat=0,f=0,stat1=0,l=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                count++;
                if(i==s.length()-1){
                    if(stat==0){
                        f=max(f,count);
                    }
                    l=count;
                    m=max(count,m);
                }
            }else{
                if(stat==0){
                        f=count;
                        stat=1;
                }
                m=max(count,m);
                count=0;
            }
        }
        // cout<<f<<" "<<l<<" "<<m<<endl;
        if(l+f<s.length()){
        l=max(l+f,m);
        }else{
            l=m;
            if(l%2==0){
                cout<<(l/2)*(l-(l/2)+3)<<endl;
            }
            else{
                ll y=l/2;
                cout<<pow(l,2)<<endl;
            }
        continue;
        }

        if(l%2==1){
            ll y=l/2;
            cout<<pow(l-y,2)<<endl;
        }else{
            cout<<(l/2)*(l-(l/2)+1)<<endl;
        }
    }

    return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
    int m;
    cin>>m;
    int n=m;
    int i=2;
    int stat=0;
    vector<int> v;
    while(i*i<m){
        if(n%i==0){
            n/=i;
            stat++;
            v.push_back(i);
        }
        if(stat==2){
            break;
        }
        i++;
    }
    if(v.size()>=2){
        if(m/(v[1]*v[0])!=1&&m/(v[1]*v[0])!=v[1]&&m/(v[1]*v[0])!=v[0]){
        cout<<"YES"<<endl;
        cout<<v[0]<<" "<<v[1]<<" "<<m/(v[1]*v[0])<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
}
return 0;
}
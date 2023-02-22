#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        long double sum=0;
        map<long double,long double> mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            mp[arr[i]]++;
        }
        long double temp=sum;
        long double avg=double(sum/n);
        //cout<<avg<<" "<<sum/n<<endl;
        ll count=0,c=0;
        for(auto x:mp){
            temp=sum-x.first;
            //cout<<(-(avg*(n-2))+(temp))<<endl;
            if(mp.find((-(avg*(n-2))+(temp)))!=mp.end()){
                if(x.first!=(-(avg*(n-2))+(temp))){
                    // auto y=mp.find();
                    //cout<<(x.second*mp[(-(avg*(n-2))+(temp))])<<endl;
                    ll r=(x.second*mp[(-(avg*(n-2))+(temp))]);
                    count+=r;
                    mp.erase((-(avg*(n-2))+(temp)));
                }
                else if(x.first==(-(avg*(n-2))+(temp))&&x.second>=2){
                    ll y=((x.second)*(x.second-1))/2;
                    count+=(y);
                }
            }
            //cout<<count<<" ";
        }

        cout<<count-int(c/2)<<endl;
    }
    return 0;
}
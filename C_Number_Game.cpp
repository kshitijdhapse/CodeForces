#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){s
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
sort(arr,arr+n);
unordered_map<int,int> mp;
for(int i=0;i<n;i++)
{
    mp[arr[i]]++;
}
// for(auto i:mp)
// {
//     cout<<i.first<<" "<<i.second<<endl;
// }
int counter=1;
for(int i=0;i<n-1;i++)
{
    if(arr[i]==arr[i+1])
    {
        counter++;
    }
    else{
        counter=1;
    }
}
if(counter==n&&n!=1)
{
    cout<<0<<endl;
}
else{
    cout<<mp.size()<<endl;
}
}
return 0;
}
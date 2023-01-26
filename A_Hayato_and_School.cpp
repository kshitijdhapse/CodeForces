#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
vector<int> v;
vector<int> v1;
int stat=1;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==0){
        v1.push_back(i+1);
    }
    if(arr[i]%2==1){
        v.push_back(i+1);
    }
    if((v1.size()>=2&&v.size()>=1)||(v.size()==3)){
        stat=0;
    }
}
if(stat==0){
    cout<<"YES"<<endl;
    if((v1.size()>=2&&v.size()>=1)){
        cout<<v1[0]<<" "<<v1[1]<<" "<<v[0]<<endl;
    }
    else{
        for(int i=0;i<3;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}
#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
ll t;
cin>>t;
while(t--){
int n;
cin>>n;
//vector<int> arr1;
int arr1[n-1],arr2[n-1],p[n-1],p1[n-1];
int mat[n][n-1];
for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
        cin>>mat[i][j];
    }
}
map <int,int> mp;
for(int i=0;i<n;i++){
    mp[mat[i][0]]++;
}
ll prev=INT_MAX,l;
for(auto x:mp){
    if(x.second<prev){
        l=x.first;
        prev=x.second;
    }
    //cout<<x.first<<" "<<x.second<<endl;
}
for(int i=0;i<n;i++){
    if(mat[i][0]==l){
        for(int j=0;j<n-1;j++){
            arr2[j]=mat[i][j];
        }
        break;
    }
}
mp.clear();
for(int i=0;i<n;i++){
    mp[mat[i][n-2]]++;
}
prev=INT_MAX,l=0;
for(auto x:mp){
    if(x.second<prev){
        l=x.first;
        prev=x.second;
    }
    //cout<<x.first<<" "<<x.second<<endl;
}
for(int i=0;i<n;i++){
    if(mat[i][n-2]==l){
        for(int j=0;j<n-1;j++){
            p1[j]=mat[i][j];
        }
        break;
    }
}
// for(int i=0;i<n-1;i++){
//     cout<<p1[i]<<" ";
// }
// for(int i=0;i<n-1;i++){
//     cout<<arr2[i]<<" ";
// }
int stat1=0,stat2=0;
for(int i=0;i<n-1;i++){
    if(i==0)
    {
        if(p1[i+1]==arr2[i]){
        cout<<p1[i]<<" "<<p1[i+1]<<" ";
        stat1=1;
        }
        else if(p1[i]==arr2[i+1]){
            cout<<arr2[i]<<" "<<arr2[i+1]<<" ";
            stat2=1;
        }
    }
    else{
        if(stat1==1){
        cout<<arr2[i]<<" ";
        }
        else if(stat2==1){
        cout<<p1[i]<<" ";
        }
    }
}
cout<<endl;
}
return 0;
}
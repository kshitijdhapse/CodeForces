 #define ll long long int 
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 int n,k;
 cin>>n>>k;
 ll arr[n]={0};
 for(int i=0;i<k;i++){
    int a,b;
    cin>>a>>b;
    for(int j=a;j<=b;j++){
        ll x=j-a+1;
        arr[j-1]+=((x)*(x+1)*(x+2))/6;
    }
 }
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
 return 0;
 }
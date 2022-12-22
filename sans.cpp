#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
   
    int t;cin>>t;
    while(t--){
      int n,m,k;
      cin>>n>>m>>k;
      int arr[m];
      map<int,int>mp;
      for(int i=0;i<m;i++){
          cin>>arr[i];
          mp[arr[i]]++;
      }
      int x=0;
      bool var=false;
      //cout<<mp.size()<<" ";
     
      if(m==n && m>=k)cout<<"yes"<<endl;
      //if(mp.size()==1 && )cout<<"yes"<<endl;
      else if(n>=k*m){
          if(mp.size()==1)cout<<"yes"<<endl;
         
           
               
            else if(mp.size()==2){
           
         for(auto it:mp){
             if(it.second==m-1){
                 x=1;
             }
             if(it.second==1 && x==1){
                 var=true;
             }
         }
          if(var){
              cout<<"yes"<<endl;
          }else{
              cout<<"no"<<endl;
          }
           }
         
      }
     
     
      else{
          cout<<"no"<<endl;
      }
}
        return 0;
}
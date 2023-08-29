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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]>arr[j]){
    //             swap(arr[i],arr[j]);
    //             v.push_back(i+1);
    //             v.push_back(j+1);
    //             v.push_back(arr[i]);
    //             v.push_back(arr[j]);
    //         }
    //     }
    // }
    for(int i=0;i<n-1;i++){
        int stat=0;
        if(__gcd(arr[i],arr[i+1])>1){
            if(arr[i]<=arr[i+1]){
                int x=min(arr[i],arr[i+1]);
                v.push_back(i+1);
                v.push_back(i+2);
                arr[i+1]=x+1;
                v.push_back(x);
                v.push_back(x+1);
            }else{
                int x=min(arr[i],arr[i+1]);
                v.push_back(i+1);
                v.push_back(i+2);
                arr[i]=x;
                arr[i+1]=x+1;
                v.push_back(x);
                v.push_back(x+1);
                if(__gcd(arr[i-1],arr[i])>1){
                    x=min(arr[i-1],arr[i]);
                    v.push_back(i);
                    v.push_back(i+1);
                    v.push_back(x);
                    v.push_back(x+1);
                    arr[i-1]=x;
                    arr[i]=x+1;
                }if(__gcd(arr[i+1],arr[i])>1){
                    x=min(arr[i+1],arr[i]);
                    v.push_back(i+1);
                    v.push_back(i+2);
                    v.push_back(x);
                    v.push_back(x+1);
                    arr[i]=x;
                    arr[i+1]=x+1;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()/4<<endl;
    for(int i=0;i<v.size();i+=4){
        cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<" "<<v[i+3]<<endl;
    }
    
}
return 0;
}
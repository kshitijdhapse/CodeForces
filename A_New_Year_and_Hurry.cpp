#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int x=240;
x=x-k;
//cout<<x<<endl;
int arr[9]={5,15,30,50,75,105,140,180,225};
if(x>0){
    int low=0,high=9,mid=4;
    while(high>=low){
        if(high-low==0){
            if(mid>=n){
                cout<<n<<endl;
            }
            else{
            cout<<mid<<endl;
            }
            break;
        }
        if(arr[mid]>x){
            high=mid;
            mid=(high+low)/2;
           // cout<<mid<<" A ";
        }
        else if(arr[mid]<x){
            low=mid+1;
            mid=(high+low)/2;
            //cout<<mid<<" B ";
        }
        else{
            if(mid+1>=n){
                cout<<n<<endl;
            }
            else{
            cout<<mid+1<<endl;
            }
            break;
        }
        
        
    }
}
else{
    cout<<0<<endl;
}
return 0;
}
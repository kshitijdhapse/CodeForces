#define ll long long int 
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n; 
        int arr[n];
        vector<long long int> one;
        vector<long long int> zero;
        //int zero=0,one=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            long long int a;
            cin>>a;
            if(arr[i]==1)
            {
                one.push_back(a);
            }
            else{
                zero.push_back(a);
            }
        }
        sort(zero.begin(),zero.end());
        sort(one.begin(),one.end());
        ll x=min(zero.size(),one.size());
        ll y=max(zero.size(),one.size());
        ll sum=0,a=zero.size(),b=one.size();
        // if(zero.size()>one.size()){
        //     sum=zero[0];
        //     a++;
        // }
        // else if(zero.size()<one.size()){
        //     sum=one[0];
        //     b++;
        // }
        // else{
        //     if(one[0]>zero[0]){
        //         sum=zero[0];
        //         a++;
        //     }
        //     else{
        //         sum=one[0];
        //         b++;
        //     }
        // }
        
        for(int i=0;i<y;i++){
            if(i<x){
            sum+=(2*zero[zero.size()-1-i]);
            sum+=(2*one[one.size()-1-i]);
            }
            // else if(zero.size()>one.size()&&i==x){
            //     sum+=(2*(zero[zero.size()-1-i]));
            // }
            // else if(zero.size()<one.size()&&i==x){
            //     sum+=(2*(one[one.size()-1-i]));
            // } 8 18 12 14 16 3
            // else if(i==x&&a>b&&a!=0&&b!=0){
            //     sum+=(2*zero[zero.size()-1-i]);
            // }
            // else if(i==x&&a<b&&a!=0&&b!=0){
            //     sum+=(2*one[one.size()-1-i]);
            // }
            else if(a>b){
                sum+=(zero[zero.size()-1-i]);
            }
            else {
                sum+=(one[one.size()-1-i]);
            }
            cout<<sum<<" ";
        }
        if(a==b){
            sum-=min(zero[0],one[0]);
        }
        cout<<sum<<endl;
	}
	return 0;
}

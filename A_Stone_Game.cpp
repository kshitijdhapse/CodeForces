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
        int arr2[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr2[i]=arr[i];
        }
        int intmax=0,maxin,intmin=INT_MAX,minin;
        for(int i=0;i<n;i++)
        {
            if(intmax<arr[i])
            {
                intmax=arr[i];
                maxin=i;
            }
            if(intmin>arr[i])
            {
                intmin=arr[i];
                minin=i;
            }
        }
        if(minin<maxin)
        {
        cout<<min({maxin+1,n-minin,n+minin-maxin+1})<<endl;
        }
        else{
        cout<<min({minin+1,n-maxin,n+maxin-minin+1})<<endl;
        }
    }
}
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
        pair<long int,long int> arr[n];
        int zero=0,one=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first;
            if(arr[i].first==0)
            {
                zero++;
            }
            else{
                one++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].second;
        }
        sort(arr,arr+n);
       /* for(int i=0;i<n;i++)
        {
            cout<<arr[i].first<<" "<<arr[i].second<<endl;;
        }*/
        long long int sum=0;
        int count=0;
        for(int i=n-1;i>=0+count;i--)
        {
            if(one!=zero)
            {
            if(one!=0&&zero!=0)
            {
            sum=sum+(2*arr[i].second);
            one--;
            //cout<<sum<<endl;
            sum=sum+(2*arr[zero-1].second);
            zero--;
            //cout<<sum<<endl;
            count++;
            }
            else{
                sum=sum+arr[i].second;
               // cout<<sum<<endl;
            }
            }
            else{
                if(one!=1&&zero!=1)
            {
            sum=sum+(2*arr[i].second);
            one--;
           // cout<<sum<<endl;
            sum=sum+(2*arr[zero-1].second);
            zero--;
            //cout<<sum<<endl;
            if(count==0||count==1)
            {
                count=0;
            }
            count++;
            }
            else{
                sum=sum+arr[i].second;
                //cout<<sum<<endl;
            }
            }
        }
        cout<<sum<<endl;
	}
	return 0;
}

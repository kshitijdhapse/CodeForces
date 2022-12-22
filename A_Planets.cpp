#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	  int n,c;
      cin>>n>>c;
      int arr[n];
      for(int i=0;i<n;i++)
      {
        cin>>arr[i];
      } 
      sort(arr,arr+n);
      int sum=0,counter=1;
      for(int i=0;i<n-1;i++)
      {
        if(arr[i]==arr[i+1])
        {
            counter++;
            
        }
        else{
            if(counter<c)
            {
                sum=sum+counter;
                
            }
            else{
                sum=sum+c;
                
            }
            counter=1;
        }
        if(i==n-2)
            {
                if(counter<c)
            {
                sum=sum+counter;
            }
            else{
                sum=sum+c;
            }
            counter=1;
            }
      }
      if(n==1)
      {
        sum=1;
      }
      cout<<sum<<endl;
	}
	return 0;
}

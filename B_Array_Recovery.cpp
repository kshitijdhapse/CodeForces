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
         }
         int stat=0;
         arr2[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]*(-1)+arr2[i-1]>=0)
            {
                if(arr[i]==0)
                {
                    arr2[i]=arr2[i-1];
                }
                else{
                    stat=1;
                    break;
                }
            }
            else{
                arr2[i]=arr[i]+arr2[i-1];
            }
        }
        if(stat==0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<arr2[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
	return 0;
}

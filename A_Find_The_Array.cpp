#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
        int n,sum=0,counter=0;
         cin>>n;
         /*for(int i=1;i<=n;i=i+2)
         {
            if(sum<n)
            {
            counter++;
            sum=sum+i;
            }
            else{
            break;
            }
         }*/
if(int(pow(n,0.5))-pow(n,0.5)==0)
{
         cout<<int(pow(n,0.5))<<endl;
	}
    else{
        cout<<int(pow(n,0.5))+1<<endl;
    }	}
	return 0;
}

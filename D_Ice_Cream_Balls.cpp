#define ll long long int 
#include<bits/stdc++.h>
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        ll low = 2;
        ll high = n;

        ll mid;
        ll ans  = 1e18;
        bool b= false;

        while(low <= high){
            b = true;
            mid = (low+high)/2;
            ll x =( mid*(mid - 1) )/2 ;

            if(x == n){
                ans = mid;
                break;
            }
            

            if(x<n){
                // cout<<"here"<<n<<" "<<mid<<" "<<ans<<endl;
                // cout<<(n - mid*(mid-1))/2 + mid<<endl;
                ans = min(ans, n - x + mid);
                low = mid+ 1;
            }

            else{
                high = mid - 1;
            }

            // cout<<mid<<" "<<ans<<endl;

        }

        if(ans == 1e18)
        ans = 2;

        cout<<ans<<endl<<endl;

    }
    return 0;
}
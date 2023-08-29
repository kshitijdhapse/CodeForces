#define ll long long int
#include<bits/stdc++.h>

using namespace std;
int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    ll arr[n], in = 0, m = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (m < arr[i] && i != 0) {
        in = i;
        m = arr[i];
      }
    }
    // cout << in << " ";
    ll in2 = in;
    if(arr[in-1]>arr[0]){
    for (int i = in - 2; i >= 0; i--) {
      if (arr[i] < arr[in - 1]) {
        in2 = i;
      } else {
        break;
      }
    }
    }
    // cout << in2 << " ";
    //    cout<<in2<<" "<<in<<endl;

    // if (in != in2) {
    //   reverse(arr + in2, arr + in);
    //   for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    //   }
    //   cout<<endl;
    // } else {
    //   for (int i = in - 1; i >= 1; i--) {
    //     if (arr[i] > arr[(i - 1)]) {
    //       // cout<<arr[i]<<" "<<arr[i-1]<<' '<<arr[(in+1)%n]<<endl;
    //       in2 = i - 1;
    //     } else {
    //       in2 = i - 1;
    //       break;
    //     }
    //     reverse(arr + in2, arr + in);
    //   }
    // }
    //    cout<<in2<<" "<<in<<endl;
    for(int i=in;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=in2;i<in;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<in2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}
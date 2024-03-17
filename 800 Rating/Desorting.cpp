#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      if(!is_sorted(arr,arr+n)){
        cout << 0 << endl;
      }else{
        int min_diff = INT_MAX;
        for(int i=1;i<n;i++){
          min_diff = min(min_diff,abs(arr[i]-arr[i-1]));
        }
        cout << ((min_diff/2) + 1) << endl;
      }
    }
    return 0;
}

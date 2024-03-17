#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ops = 1e9;
    for(int i=0;i<n;i++){
      ops = min(ops,abs(arr[i]-0));
    }
    cout << ops << endl;
    return 0;
}

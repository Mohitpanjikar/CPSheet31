#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        //in the worst possible case the which is k == 1 
        //if it is sorted thenw we are return true else false for any value greater then 1 always true
        if (k == 1) {
            if (isSorted(arr, n)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}

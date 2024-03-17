#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        unordered_map<int, int> mp;
        bool flag = true;

        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;

            if (mp.size() > 2) {
                flag = false;
                break;
            }
        }
        if (mp.size() == 2) {
            int freq = begin(mp)->second;

            if (freq != n / 2 && freq != (n + 1) / 2) {
                flag = false;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

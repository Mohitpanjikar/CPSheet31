#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        bool found = false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i] == k){
                found = true;
            }
        }
        if(found)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}

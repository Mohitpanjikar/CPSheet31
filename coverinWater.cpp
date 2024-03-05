#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
            
        bool flag = true;
        int emptycell_Count = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                emptycell_Count++;
            }
            //we will try to find WoW pattern and if get within the bound we will
            //return 2 else we will return no of empty cell ,WoW pattern means infinit water supply 
            if(i>0 && i<n){
                if(s[i-1] ==  '.' && s[i] == '.' && s[i+1] == '.' ){
                    cout << 2 << endl;
                    flag = false;
                    break;
                }
            }
        }
        if(flag == true){
            cout << emptycell_Count << endl;
        }
    }
    return 0;
}

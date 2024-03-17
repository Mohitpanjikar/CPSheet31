#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr_b[n];
      
      //filling the array b -
      for(int i=0;i<n;i++){
        cin>>arr_b[i];
      }
      
      //creating array a from array b - 
      vector<int>arr_a;
      arr_a.push_back(arr_b[0]);
      
      for(int i=2;i<n;i++){
        if(arr_b[i-1]<=arr_b[i]){
          arr_a.push_back(arr_b[i]);
        }else{
         arr_a.push_back(arr_b[i]);
         arr_a.push_back(arr_b[i]);
          
        }
      }
      
        cout << arr_a.size() << endl;
        for(auto it : arr_a) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}

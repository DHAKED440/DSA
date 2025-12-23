#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int>num={1,2,2,1,1};
    int n=num.size();
    int freq=0,ans=0;
    for(int i=0; i<n; i++) {
      if(freq==0){
        ans=num[i];
      }
      if(ans==num[i]){
        freq++;
      }else {
        freq--;      
      }
    }
    cout << ans << endl;
    return 0;
}
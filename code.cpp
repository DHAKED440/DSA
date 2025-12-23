#include<iostream>
#include<vector>
#include<limits.h>
#include <algorithm>
using namespace std;

int main () {
   int n=5;
 vector<int>num={2,1,2,1,1};
  sort(num.begin(),num.end());
  int freq=1,ans=num[0];
  for(int i=1; i<n; i++){
   if(num[i]==num[i-1]){
      freq++;
   } else {
      freq=1;
      ans=num[i];
   }
   if(freq > n/2){
      cout<< "majority element = " << num[i] << endl;
      break;
   }
  }
  return 0;
}

 


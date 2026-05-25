#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int>arr1={4,5,6,0,0,0};
    int m=3;
    vector<int>arr2={1,2,3};
    int n=3;

    int idx=m+n-1, i=m-1,j=n-1;
    while(i>=0 && j>=0){
    if(arr1[i] >= arr2[j]){
        arr1[idx]=arr1[i];
        idx--;
        i--;
    } else {
        arr1[idx]=arr2[j];
        idx--;
        j--;
    }
  } 

  while(j>=0){
    arr1[idx]=arr2[j];
    idx--;
    j--;
  }
  
  for(int x : arr1){
    cout << x << " ";
  }
  return 0;
  }

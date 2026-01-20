// Agressive Cows Problem
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool ispossibel(vector<int>& arr , int m , int mindistance){
int cowplaces=1;
int  laststallpos=arr[0];
  for (int i=1; i<arr.size(); i++) {
    if(arr[i]-laststallpos >= mindistance){
        cowplaces++;
         laststallpos=arr[i];
    }
        if( cowplaces == m) {
    return true;
}  
        
  }
  return false;
}


int aggressivecows(vector<int>& arr , int m){ // m = no. of cows
    sort(arr.begin(), arr.end());
   int st=1 , end=arr[arr.size()-1] - arr[0] , ans=-1;
   while(st <= end){
    int mid = st +(end-st)/2;
    if(ispossibel(arr , m , mid)){
        ans=mid;
        st=mid+1;
    }else {
        end=mid-1;
    }

   }
   return ans;
}

int main () {
    vector<int>arr={1,2,8,4,9}; // stalls positions
    int cows=3;
    cout << "maximum minimum distance : " << aggressivecows(arr , cows);
    return 0;
}
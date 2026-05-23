// code for find singel number by using binary seach 
#include<iostream>
#include<vector>
using namespace std;

int singelnu( vector<int>& arr){
       int st=0 , end=arr.size()-1;
       if(arr.size()==1){
        return arr[0];
       }
       while(st <= end){
        int mid=st+(end-st)/2;
           if( mid==0 && arr[mid] != arr[mid+1]){
            return arr[mid];
           }
           if(mid == arr.size()-1 && arr[arr.size()-1] != arr[arr.size()-2]) {
            return arr[mid];
           }
        if( arr[mid-1] != arr[mid] && arr[mid+1] != arr[mid]){
            return arr[mid];
        } else {
            if( mid % 2 == 0){
                      if( arr[mid] == arr [mid+1]){
                        st= mid +1;
                      } else {
                        end= mid -1;
                      }

                 } else {
                      if( arr[mid-1] == arr[mid]){
                        st=mid+1;
                      } else {
                        end=mid-1;
                              }                    
                    }
            }
         }
         return -1; // just to avoid warning
    }


int main () {
    vector<int>arr={1,1,2,3,3,4,4,8,8};
    cout << singelnu(arr);
    return 0;
}
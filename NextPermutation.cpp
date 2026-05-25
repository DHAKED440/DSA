#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    vector<int>nums={1,2,3,6,5,4};
   int  n=nums.size();

   //first targte to find the pivot element
   int piv=-1;
   for(int i=n-2; i>=0; i--){
       if(nums[i]<nums[i+1]){
        piv=i;
        break;
       }
   }

   if(piv==-1){    // v0 case jab pura arr dec fasion me ho.
    int i=0, j=n-1;
    while(i <= j ){
        swap(nums[i] , nums[j]);
        i++;
        j--;
    }
        return 0;
    }
     // next target to find the just largert element then pivot element
    for(int i=n-1; i>piv; i--){
        if(nums[i]>nums[piv]){
            swap(nums[i],nums[piv]);
            break;
        }
    }

    // last part reverse dec order part 
    int i=piv+1 , j=n-1;
    while( i<=j){
        swap(nums[i] , nums[j]);
        i++;
        j--;
    }
    for( int x : nums){
        cout << x << " ";
    }
    return 0;
   }


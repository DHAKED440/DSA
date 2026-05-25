#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
    vector<int>vec={2,0,2,1,1,0,1,2,0,0};
    int n=vec.size();

    int low=0 , mid=0 , high=n-1;
    while(mid <=high){
        if (vec[mid]==0){
            swap(vec[low] , vec[mid]); //shift left 
            low++;
            mid++;
        } else if (vec[mid]==1){            
            mid++;
        } else if ( vec[mid]==2) {
            swap(vec[mid] , vec[high]); // shift right by high num , ab mid ki jagah new number aya hoga use bubara check kerna hai 
            high--;
        }
    }
    for ( int x : vec){
       cout << x << " ";
    }
    return 0;
}
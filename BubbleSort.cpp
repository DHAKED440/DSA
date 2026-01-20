#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bubbelsort(vector<int>& arr ) {
    int n= arr.size();
    
    for(int i=0 ; i<n-1 ; i++){
        bool isswap=false;
        for( int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap( arr[j] , arr[j+1]);
                isswap=true;
            }

        }
        if(!isswap){ // array is already sorted
            break;
        }
    }

}

int main () {
    vector<int>arr={4,1,5,2,3};
    bubbelsort(arr);
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}
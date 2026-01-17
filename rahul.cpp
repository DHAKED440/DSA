#include<iostream>
#include<vector>

using namespace std;

int singlenumber( vector<int>& arr){
    int st=0,end=arr.size()-1;
    while( st<end){
        int mid= st+(end-st)/2;
        if( mid%2==0){
            if( arr[mid]==arr[mid+1]){
                st=mid+2;
            }
            else{
                end=mid;
            }
        }
        else{
            if( arr[mid]==arr[mid-1]){
                st=mid+1;
            }
            else{
                end=mid;
            }
        }
    }
    return arr[st];
}
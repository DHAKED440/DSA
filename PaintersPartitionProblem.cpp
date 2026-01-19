// painter's partition problem
#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int>& arr , int n , int M , int mintimetopaint ){
    int painterequired=1;
    int currtime=0;
    for(int i=0; i<n; i++){
          if(arr[i] > mintimetopaint){
            return false;
          }
          if(arr[i] + currtime <= mintimetopaint){
            currtime+=arr[i];
          } else {
            painterequired++;
            if( painterequired > M ){
                return false;
            }
            currtime=arr[i];
          }
    }
    return true;
}

int painterpartition(vector<int>& arr , int M){
    int sum=0;
    int n=arr.size();
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int st=0 , end=sum , ans=-1;
    while(st <= end){
        int mid= st + (end -st)/2;
        if( isvalid(arr , n , M , mid)){ // got o left in search space
            ans=mid;
            end=mid-1;
        } else { // go to right in search space
            st=mid+1;
        }
    }
    return ans;
}

int main () {
   vector<int>arr={10,10 , 10 , 10};
   int M=2; //no. of painters;
     cout << "min time to paint : " << painterpartition(arr , M);
     return 0;
}
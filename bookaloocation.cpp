// book allocation problem
#include<iostream>
#include<vector>
using namespace std;

bool isvalid(vector<int>& arr , int N , int m , int maxallowedpages ){
    int studentrequired=1;
    int currentpages=0;
    for(int i=0; i<arr.size(); i++){
          if(arr[i] > maxallowedpages){
            return false;
          }
          if(arr[i]+currentpages <= maxallowedpages){
            currentpages+=arr[i];
          } else {
            studentrequired++;
            if( studentrequired > m){ 
                return false;
            }
            currentpages=arr[i];
          }

              }
              return true;
}

int bookallocation( vector<int> & arr , int m , int N){
    int n=arr.size();
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }

    int st=0 , end=sum , ans=-1;
    while( st <= end){
          int mid = st + (end - st)/2;
          if( isvalid(arr , N , m , mid)){
              ans=mid;
             end=mid-1;
          } else {
            st=mid+1;
          }
    }
    return ans;
}

int main () {
  vector<int>arr={2,1,3,4};
  int N=4; // N means nu. of books
  int m=2; // m means no. of students
cout << bookallocation(arr , m , N);
return 0;
}



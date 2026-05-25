#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {
//     int n;
//     cin >> n;
//     vector<int>arr(n);
// for ( int i=0; i<n ; i++){
//     cin>> arr[i];
// }
// sort(arr.begin() , arr.end());
// for ( int i=0 ; i<n; i++){
//     cout << arr[i];
// }
vector<int>arr={2,0,2,1,1,0,1,2,0,0};
int n=arr.size();
int count0=0, count1=0,count2=0;
for( int i=0 ; i<n; i++ ) {
    if( arr[i]==0) {
        count0++;
    } else if (arr[i]==1) {
     count1++;
    } else {
         count2++;
    }
}

int idx=0;
for(int i=0 ; i< count0 ; i++){
     arr[idx++]=0;
}
for(int i=0; i<count1 ; i++){
    arr[idx++]=1;
}
for (int i=0 ; i<count2 ; i++){
    arr[idx++]=2;
}

for(int x : arr )
{
cout << x << " ";
}
return 0;
}
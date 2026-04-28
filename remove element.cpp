#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int>nums={1,2,2,3,2,4};
    int n=nums.size();

    nums.erase(remove(nums.begin(),nums.end(),2),nums.end());

    
}
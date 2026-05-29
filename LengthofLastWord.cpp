#include<iostream>
#include <sstream>
#include <string>
#include<vector>
using namespace std;

int main () {
//     vector<string>arr={};
//     string s={"luffy is still joy boy"};
//     stringstream ss(s);
//     string word;
//     while(ss >> word){
//          arr.push_back(word);
//     }
//      int n=arr.size();
//      cout << arr[n-1].length();
//      return 0;

vector<string>s={"luffy is still joy boy"};
int n=s.size();
for(int i=0; i<n; i++) {
     if (i == n-1){
     cout << s[n-1];
} else {
     continue;
}
}
}


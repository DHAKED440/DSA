#include<iostream>
#include <sstream>
#include <string>
#include<vector>
using namespace std;

int main () {
     vector<string>arr={};
     string s={"luffy is still joy boy"};
     stringstream ss(s);
     string word;
     while(ss >> word){
          arr.push_back(word);
     }
      int n=arr.size();
      cout << arr[n-1].length();
      return 0;


}


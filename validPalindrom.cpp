#include<iostream>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;

    bool isPalindrome(string s) {
        string result;
        for(char c : s){
            if(isalnum(c)){
                result+=tolower(c);
            }
        }
        
        string rev=result;
        reverse(rev.begin() , rev.end());
        if(rev==result){
            return true;
        }else{
            return false;
        }
    }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
    vector<string>str={"dog","racecar","car"};
    string ans="";

 for(int i=0 ; i<str[0].size(); i++){    // we are check first string every element 
       char ch=str[0][i];

       bool match=true;

      for(int j=0; j<str.size() ; j++){  // by all string element if same index 
        // char are not match or str size is less then  first string size then break

        if(str[j][i] != ch || i >= str[j].size() ){
            match=false;
            break;
        }
      } 

      if(match){
        ans+=ch;
      }else{
            break;
      }

}
  cout << ans; 
  return 0;
}

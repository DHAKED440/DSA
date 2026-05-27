#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main (){
    vector<string>str={"dog","racecar","car"};
    string ans="";

 for(int i=0 ; i<str[0].size(); i++){
       char ch=str[0][i];

       bool match=true;

      for(int j=0; j<str.size() ; j++){
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

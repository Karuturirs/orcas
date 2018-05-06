#include <iostream>
#include <bitset>
#include <vector>
#include <cmath>

using namespace std;

namespace encode{
  static const std::string base64_chars =
             "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
             "abcdefghijklmnopqrstuvwxyz"
             "0123456789+/";
  string encode64(const string& statement){
    string binary;
    for(auto character:statement){
      binary += std::bitset<8>((int) character).to_string(); //to binary
    }
    for(int x = 0; x<5;x++){
      int data_length = binary.size();
      if((data_length%6) != 0 ){
        binary += "0";
      }else{
        break;
      }
    }
    string encodevalue = "";
    int x=0;
    int y=5;
    for(int i=0;i<binary.size();i++){
      string s;
      s.push_back(binary.at(i));
      x = x+ (stoi(s))*( pow(2,y));
      if(y==0){
        y=5;
        encodevalue = encodevalue + base64_chars.at(x);
        x=0;
      }else{
        y= y-1;
      }
    }
    for(int z = 0; z<3;z++){
      int data_length = encodevalue.size();
      if((data_length%4) != 0 ){
        encodevalue += "=";
      }else{
        break;
      }
    }
    return encodevalue;
  }
}

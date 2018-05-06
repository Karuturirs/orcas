#include <iostream>
#include <../inc/encode.hpp>
using namespace std;

int main(){
  string data;
  cout << "Welcome to Orcas Application." << endl;
  cout << "What do you want me to encode? "<< endl;
  getline(cin,data);
  cout << "Encoding of \""<< data << "\" is ::" << endl;
  cout <<encode::encode64(data) <<endl;
  return 0;
}

#include<iostream>
#include<fstream>
using namespace std;
int main(){
  string str;
  ifstream fst("text.txt");
  if(fst.is_open()){
      while(getline(fst,str)){
          cout<<str<<endl;
      }
      fst.close();
  }
  else{
      cout<<"file opening is fail"<<endl;
  }
  return 0;
}
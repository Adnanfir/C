#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
void char_example(){

    // out file stream instance 
    ofstream fout ;
    string filename="sample.txt"; // also try realative path
    string line = "My test line ....";
     fout.open(filename);
     fout << line <<endl;
     fout.close();

  // input file stream instnce 
  ifstream fin;
  fin.open(filename);
  while(getline(fin, line)){ 
    cout<<line<<endl;
  }
  fin.close();
}
int main(){
  char_example();
}
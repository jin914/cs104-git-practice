#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[]){
  if(argc < 2){
    cerr << "Please provide an input file." << endl;
    return 1;
  }
  ifstream text(argv[1]);
  
  if (!text) {
    cerr << "Unable to open file.";
    return 1;
}
  
  int n = -1;
  int count = 0;
  
  text >> n;
  
  char output[n];
  string sent;
  
  text.ignore();
  getline(text, sent);
  
  cout << sent << endl;
  
  sent.c_str();
  
  text.close();
  
  for(int i=0; i<n ;i++){
      output[i] = sent[n-i-1];   
  }
  
  cout << output << endl;
  
  return 0;
   
}


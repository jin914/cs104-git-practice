#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
  if(argc < 3){
    cerr << "Please provide an input and output file." << endl;
    return 1;
  }
  
  ifstream input(argv[1]);
  ofstream output(argv[2]);

  int experiments;
  int *numsubjects;
  string **history;
  string line; //new
  string curr;

  //for each experiment, you will need to keep track of the number of subjects; and for each subject, of their history

  //loop to read The Rani's logbook.
  while(getline(input, curr)) {
     line = curr; //new
	  stringstream ss;
	  ss << curr;
	  ss >> curr;
	  
	  if (curr == "START") {
	    // Hint: This does not cover all errors yet.
		  int n;
		  ss >> n;
		  if (ss.fail()) {
		    output << "Error - incorrect command: " << line << endl;
  		    output << "Parameter should be an integer" << endl;
		  }
		  else if (n < 0) {
		    output << "Error - incorrect command: " << line << endl;
		    output << "Number out of range" << endl;
		  } //add more error statements here!
		  else {
		  
		     numsubjects = new int [n]; //tracks "n" many subjects
		     
		     for(int i=0; i<n; i++){
		     
		   	  //all participants are enrolled in exp. 0 
		   	  history = new string[0][n];
			     
			     history[0][n] = "0 ";
		     }
		  }
	  }
	  else if (curr == "ADD") {
         experiments++;
	  }
	  else if (curr == "MOVE") {
	 //fix this part
	      int x, y, n, m;
         ss >> x, y, n, m;
         for(int i=n; n<=m; n++){
            //remove history[x][i];
            //add history[y][i];
            
            //change participant history[y][i] so that participant "i"
            //gets a new 
         
         }
         
	  }
	  else if (curr == "QUERY") {

	  }
	  else {
		  
	  }
  }
  return 0;
}

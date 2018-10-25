// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }
  string file = (argv[1]);
  ifstream ifs;
  ifs.open(file);
  string line = " ";
  int d = 0, nd = 0, a = 0;
  getline(ifs, line);
  while(line != ""){
	a++;
	if(line == "duck")
		d++;
	else
		nd++;
	getline(ifs, line);
  }
  cout << "Animal count:    " << a << endl << "Duck count:      " << d << endl << "Non duck count:  " << nd << endl;
  return 0;
}

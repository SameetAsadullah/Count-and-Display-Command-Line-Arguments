#include <iostream>
#include <unistd.h>
using namespace std;

int main (int argc, char *argv[]) { // command line arguments
									// pass arguments when running exe
									// ./a.out (default arguement "./a.out" , total arguments = 1)
									// ./a.out hello (total arguments = 2 , one is ./a.out and second is hello)
	// argc = argument count
	// char *argv[] = argument vector

	cout << "Arguments Count= " << argc << endl;

	for (int i =0 ; i < argc ; i++) {
		cout << "Argument " << i + 1 << "= " << argv[i] << endl;
	}
}

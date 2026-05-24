#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=1000;

int main(int argc, char** argv) {
	fstream we("C:/cpp/napisy.txt");
	int i=0;
	string napisy[n], b="";
	
	for(i=0; i<n; i++){
		we>>napisy[i];
	}
	
	for(i=19; i<n; i+=20){
		b=napisy[i];
		cout<<b[i/20];
	}
	
	return 0;
}

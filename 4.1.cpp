#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=1000;

int main(int argc, char** argv) {
	fstream we("C:/cpp/napisy.txt");
	int i=0, j=0, cyfry=0;
	string napisy[n], b="";
	char a=0;
	
	for(i=0; i<n; i++){
		we>>napisy[i];
	}
	
	for(i=0; i<n; i++){
		b=napisy[i];
		for(j=0; j<b.size(); j++){
			a=b[j];
			if(a<'A')
				cyfry++;
		}
	}
	
	cout<<cyfry;
	
	return 0;
}

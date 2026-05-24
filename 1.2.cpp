#include <iostream>

using namespace std;

int zach(int n){
	int i=n, dl=0, pom=1;
	while(n>0){
		pom=i*i;
		while(n-pom>=0){
			n-=pom;
			dl++;
		}
		i--;
	}
	return dl;
}

int main(int argc, char** argv) {
	cout<<zach(12);
	return 0;
}

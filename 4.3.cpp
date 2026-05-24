#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=1000;

bool palindrom(string a){
	int i=0;
	for(i=0; i<a.size(); i++){
		if(a[i]!=a[a.size()-1-i])
			return false;
	}
	return true;
}

int main(int argc, char** argv) {
	fstream we("C:/cpp/napisy.txt");
	int i=0;
	string napisy[n], b="", c="", d="";
	
	for(i=0; i<n; i++){
		we>>napisy[i];
	}
	i=0;
	for(i=0; i<n; i++){
		b=napisy[i];
		if(!palindrom(b)){
			c=b+b[0];
			d=b[b.size()-1]+b;
			if(palindrom(c)){
				cout<<c[c.size()/2];
			}
			if(palindrom(d)){
				cout<<d[d.size()/2];
			}
		}
		else{
			cout<<b[b.size()/2];
		}
	}
	
	return 0;
}

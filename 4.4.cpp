#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=1000;

int main(int argc, char** argv) {
	fstream we("C:/cpp/napisy.txt");
	int i=0, j=0, pom=0, para1=0, para2=0, trzy_x=0;
	string napisy[n], b="", c="", cyfry[n];
	char a=0;
	
	for(i=0; i<n; i++){
		we>>napisy[i];
	}
	
	for(i=0; i<n; i++){
		b=napisy[i];
		for(j=0; j<b.size(); j++){
			a=b[j];
			if(a<'A')
				c+=a;
		}
		cyfry[i]=c;
		c="";
	}
	
	for(i=0; i<n; i++){
		if(cyfry[i].size()>1){
			if(cyfry[i].size()%2==1)
				pom=2;
			else
				pom=1;

			b=cyfry[i];
			for(j=0; j<b.size()-pom; j+=2){
				para1=b[j]-'0';
				para2=b[j+1]-'0';
				a=para1*10+para2;
				if(a>=65 & a<=90){
					cout<<a;
					if(a=='X'){
						trzy_x++;
						if(trzy_x==3){
							j=b.size()-pom-1;
							i=n-1;
						}
					}
				}
			}
		}	
	}
	
	return 0;
}

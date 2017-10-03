// Read a text file into a string

#include <iostream>
#include <fstream> // file stream
#include <string>
using namespace std;

int main(){
	string line;
	string result = "";
	ifstream ifs("awmt.txt");
	
	if (ifs.is_open()){
		while (getline(ifs, line)){
			//cout << line << endl;
			result += line;
		}
		ifs.close();
	}
	
	cout << result << endl;
	
}



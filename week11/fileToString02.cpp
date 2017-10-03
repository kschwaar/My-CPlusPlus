// Read a text file into a string

#include <iostream>
#include <fstream> // file stream
#include <string>
using namespace std;

string fileToString (string fileName);

int main(){
	string data = fileToString("./awmt.txt");
	cout << data << endl;
	
}

string fileToString (string fileName){
	string line;
	string result = "";
	ifstream ifs(fileName.c_str()); // c_str look in the string class, he calls this goofy
	// standard streams do not accept standard string 
	
	if (ifs.is_open()){
		while (getline(ifs, line)){
			result += line;
		}
		ifs.close();
	}
	
	return result;
}

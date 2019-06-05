#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	string path = "myFile.txt";
	ofstream fout;
	fout.open(path);

	fout << "Hello, world!";
	fout.close();
	return 0;
}
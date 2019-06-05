#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	string path = "myFile.txt";
	ifstream fin;
	fin.open(path);

	string str;

	getline(fin, str);
	cout << str << endl;
	
	
	fin.close();

	system("pause");
	return 0;
}
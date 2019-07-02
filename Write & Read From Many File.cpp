#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream fout;
	fout.open("country");
	
	fout << "USA\n";
	fout << "UK\n";
	
	fout.close();
	
	fout.open("capital");
	
	fout << "London\n";
	fout << "Korea\n";
	
	fout.close();
	
	const int N = 80;
	char line[N];
	
	ifstream fin;
	fin.open("country");
	
	cout << "Contents of country file :";
	
	while(fin)
	{
		cout << endl;
		fin.getline(line, N);
		cout << line;
	}
	
	fin.close();
	
	fin.open("capital");
	
	cout << "\nContents of capital file :";
	
	while(fin)
	{
		cout << endl;
		fin.getline(line, N);
		cout << line;
	}
	
	fin.close();
	
	return 0;
}


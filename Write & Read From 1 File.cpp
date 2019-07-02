#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream outf("ITEM");	// extetion like .txt , .exe
	
	cout << "\n Enter the item name : ";
	char name[30];
	cin >> name;
	
	outf << name << endl;
	
	cout << "Enter the iten cost : ";
	float cost;
	cin >> cost;
	
	outf << cost << endl;
	
	outf.close();
	
	ifstream inf("ITEM");	// extetion like .txt , .exe
	
	inf >> name;
	inf >> cost;
	
	cout << endl << "Item Name : " << name;
	cout << endl << "Item Cost : " << cost;
	
	inf.close();
	
	return 0;
}

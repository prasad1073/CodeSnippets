#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	ofstream f1;       //create
	f1.open("info.txt");
	f1<<"hello"<<endl;
	f1<<"Nashik";
	f1.close();
	ifstream f2("info.txt");   //read
	char line[80];
	while(f2)
	{
		f2.getline(line,80);
		cout<<endl<<line;
	}
}

#include<iostream>
#include<fstream>
#include<ctime>
using namespace std ;

int main()
{
	time_t timestamp;
  	time(&timestamp);
	ofstream fout("log.txt",ios::app);
	fout<<ctime(&timestamp);
	fout<<"\n";
	cout << "Logged";;
	return 0;
}

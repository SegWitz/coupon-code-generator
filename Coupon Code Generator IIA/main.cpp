#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<ctime>
#include<cstdio>
#include<fstream>

using namespace std;

int main()

{
	
	ofstream outputFile;
	outputFile.open("program3data.txt");

	srand(time(0));
	int num,n,f,l;
	char c, d, e;

	cout << "Enter the number of coupons to generate :" << endl;
	cin >> num;

	
	

	for (int x=0;x<=num;x++)
	{
		

		n = rand() % 8;
		c = (char)(n + 65);

		f = rand() % 16;
		d = (char)(f + 65);

		l = rand() % 26;
		e = (char)(l + 65);

	
		cout <<"cbc101" << c << d << e << 999 + (rand() % 9999) << endl;
		
		outputFile << "cbc101" << c << d << e << 999 + (rand() % 9999) << endl;
	}
	
	outputFile.close();
	cout << "Done!\n";
	

	system("PAUSE");
	return 0;
}

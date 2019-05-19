#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{

	int a, r;
	char c;

	srand(time(0));

	for (a=0;a<=30;a++)
	{
		r = rand() % 26;
		c = 'a' + r;

		cout << c;

	}


	system("PAUSE");
	return 0;
}
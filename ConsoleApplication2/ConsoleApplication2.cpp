#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a1 = 60;
	int a2 = 60;
	int b1 = 25;
	int c1 = a1 + b1;
	int c2 = a1 - b1;
	int c3 = a1 * b1;
	int c4 = a1 / b1;
	int c5 = a1 % b1;

	if (a1 > b1)
	{
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}


	if (c1 < c3)
	{
		cout << "true" << endl;;
	}
	else {
		cout << "false" << endl;
	}


	if (c4 != c5)
	{
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}


	if (a1 == a2)
	{
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}



	if (a1 > b1 && c2 < c1)
	{
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}



	if (c5 < c3 || c5 > c3)
	{
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}


}

// Datatype of CPP
#include <iostream>
#include <string>
#include <iomanip>

#define CHAR_INPUT_MAX 11
using namespace std;
int main()
{
	int iInput;
	char cInput_arr[CHAR_INPUT_MAX];
	string sInput;
	float fInput;
	double dInput;
	bool bInput;
	long double ldInput;

	// int
	cout << "Please input your favorite number : ";
	cin >> iInput;
	cout << "iInput = " << iInput << endl;
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	// char_arr h e l l o w o r l d \0
	cout << "Please input your favorite word :";
	cin >> setw(11) >> cInput_arr;
	cout << "cInput_arr = " << cInput_arr << endl;
	cin.clear();
	cin.ignore(CHAR_MAX, '\n');

	// string
	cout << "Please input your favorite string :";
	getline(cin, sInput);
	cout << "sInput = " << sInput << endl;

	// float
	cout << "Please input pi number :";
	cin >> fInput;
	cout << "fInput = " << fInput << endl;
	cout << setprecision(16);
	cin.clear();
	cin.ignore(INT_MAX, '\n');
	//cout << "INPUT_MAX = " << INT_MAX << endl;

	// double
	cout << "Please input pi double number :";
	cin >> dInput;
	cout << "dInput = " << dInput << endl;

	// long double
	cout << "Please input pi long double number :";
	cin >> ldInput;
	cout << "ldInput = " << ldInput << endl;

	return 0;
}
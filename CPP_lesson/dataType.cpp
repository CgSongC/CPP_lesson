// DataType of CPP
#include <iostream>
#include <string>
using namespace std;
int main()
{
	printf_s("Hello Cpp\n");
	cout << "Hello CPP" << endl;
	int iInput;    // ������
	string sInput; // ���ڿ�
	char cInput;   // ������
	//char cInput_arr[2];
	double dInput; // ���� ū �Ǽ���
	bool bInput;   // ���� True oi False
	float fInput;  // �Ǽ���

	//cout << "Please input a character :";\
	//cin.getline(cInput_arr, 10);
	//cin.clear();
	//cout << "cInput :" << cInput << endl;
	//cout << "cInput_arr :" << cInput_arr << endl;

    // int
	cout << "Please input a int :";
	cin >> iInput;
	cout << "iInput :" << iInput << endl;

	// string
	cout << "Please input a string :";
	getline(cin, sInput); //Input one more
    cout << "sInput :" << sInput << endl;

	// bool
	bInput = (1==2);
	cout << "bool : " << bInput << endl;
	
	// float
	cout << "Please input a float :";
	cin >> fInput;
	cout.precision(6);
	cout << "fInput : " << fixed << fInput << endl;
	
	// double
	cout << "Please input a double :";
	cout.precision(6);
	cin >> dInput;
	cout << "dInput : " << fixed << dInput << endl;
	return 0;
}
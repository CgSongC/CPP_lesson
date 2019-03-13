// What is there a operator
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int iInput1, iInput2;
	double dInput1, dInput2;
	// 사칙연산
	// +,-,*,/,%
	// 연산의 우선순위는 () */ +- 관계연산 논리연산 대입연산(=)
	// 두개의 실수를 입력을 받아서 사칙연산을 실행해보자
	cout << "두개의 정수를 입력하세요: ";
	cin >>dInput1 >> iInput1 >> iInput2;

	cout << "iInput1 + iInput2 = " << iInput1 + iInput2 << endl;
	cout << "iInput1 - iInput2 = " << iInput1 - iInput2 << endl;
	cout << "iInput1 * iInput2 = " << iInput1 * iInput2 << endl;
	cout << "iInput1 / iInput2 = " << iInput1 / iInput2 << endl;
	cout << "iInput1 % iInput2 = " << iInput1 % iInput2 << endl;
	// 관계 연산자
	// >, <, >=, <=, !=, ==
	cout << "dInput1 > iInput2 = " << (dInput1 > iInput2) << endl;
	cout << "dInput1 < iInput2 = " << (dInput1 < iInput2) << endl;
	cout << "dInput1 >= iInput2 = " << (dInput1 >= iInput2) << endl;
	cout << "dInput1 <= iInput2 = " << (dInput1 <= iInput2) << endl;
	cout << "dInput1 != iInput2 = " << (dInput1 != iInput2) << endl;
	cout << "dInput1 == iInput2 = " << (dInput1 == iInput2) << endl;
	// 논리 연산
	// AND(&&), OR(||), NOT(!)

	if (dInput1 >= 10 and 20 >= dInput1)
	{
		cout << "입력되는 모든 숫자는 10보다 크고 20보다 작아야 합니다";
	}
	else
	{
		cout << "입력된 숫자중에 하나 이상이 10보다 작거나 같은 숫자입니다";
	}

	return 0;
}
// What is there a operator
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int iInput1, iInput2;
	double dInput1, dInput2;
	// ��Ģ����
	// +,-,*,/,%
	// ������ �켱������ () */ +- ���迬�� ������ ���Կ���(=)
	// �ΰ��� �Ǽ��� �Է��� �޾Ƽ� ��Ģ������ �����غ���
	cout << "�ΰ��� ������ �Է��ϼ���: ";
	cin >>dInput1 >> iInput1 >> iInput2;

	cout << "iInput1 + iInput2 = " << iInput1 + iInput2 << endl;
	cout << "iInput1 - iInput2 = " << iInput1 - iInput2 << endl;
	cout << "iInput1 * iInput2 = " << iInput1 * iInput2 << endl;
	cout << "iInput1 / iInput2 = " << iInput1 / iInput2 << endl;
	cout << "iInput1 % iInput2 = " << iInput1 % iInput2 << endl;
	// ���� ������
	// >, <, >=, <=, !=, ==
	cout << "dInput1 > iInput2 = " << (dInput1 > iInput2) << endl;
	cout << "dInput1 < iInput2 = " << (dInput1 < iInput2) << endl;
	cout << "dInput1 >= iInput2 = " << (dInput1 >= iInput2) << endl;
	cout << "dInput1 <= iInput2 = " << (dInput1 <= iInput2) << endl;
	cout << "dInput1 != iInput2 = " << (dInput1 != iInput2) << endl;
	cout << "dInput1 == iInput2 = " << (dInput1 == iInput2) << endl;
	// �� ����
	// AND(&&), OR(||), NOT(!)

	if (dInput1 >= 10 and 20 >= dInput1)
	{
		cout << "�ԷµǴ� ��� ���ڴ� 10���� ũ�� 20���� �۾ƾ� �մϴ�";
	}
	else
	{
		cout << "�Էµ� �����߿� �ϳ� �̻��� 10���� �۰ų� ���� �����Դϴ�";
	}

	return 0;
}
// Lab_03_2.cpp
// Rekhtman Mykhailo
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 0.1
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	
	if (a < 0 && c != 0)
		F = (-a) / (x - c);
	else
		if (a > 0 && c == 0)
			F = (x - a) / (x - c);
		else
			F = a * (x + c);
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}
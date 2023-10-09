#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

bool Prostoe(int n) {
	if (n > 1) {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
	else {
		return false;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "����� ���������� � ����� ���������� ����������!" << "\n";
	cout << "1. ����� �����������" << "\n" << "2. ����� ���������� ������" << "\n" << "3. ����� ������� �����" << "\n" << "�������� ����� ��� �����(1 / 2 / 3)" << "\n";
	cin >> x;
	if (x == 1) {
		int a1, b1;
		cout << "������� ������ ����������: ";
		cin >> a1;
		cout << "������� ������ ����������: ";
		cin >> b1;
		cout << "������� ����� ��������..." << "\n" << "���������: " << a1 + b1;
	}
	else if (x == 2) {
		int a2, b2, c2;
		double cor1, cor2, d;
		cout << "������� �������� ��� �a�: ";
		cin >> a2;
		cout << "������� �������� ��� �b�: ";
		cin >> b2;
		cout << "������� �������� ��� �c�: ";
		cin >> c2;
		d = pow(b2, 2) - 4 * a2 * c2;
		cor1 = ((-1) * b2 + pow(d, 0.5)) / 2 * a2;
		cor2 = ((-1) * b2 - pow(d, 0.5)) / 2 * a2;
		cout << "������������� ����� ������������ ������..." << "\n" << "������ 1: " << cor1 << "\n" << "������ 2: " << cor2;
	}
	else if (x == 3) {
		int a3;
		cout << "������� ���������� (n): ";
		cin >> a3;
		cout << "������������� ����� ������� �����...";
		cout << "������� ����� �� " << a3 << ": ";
		for (int i = 0; i <= a3; i++) {
			if (Prostoe(i) == true) {
				cout << i << ", ";
			}
		}
	}
	return 0;
}
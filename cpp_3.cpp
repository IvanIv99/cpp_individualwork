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
	cout << "Добро пожаловать в книгу заклинаний волшебника!" << "\n";
	cout << "1. Зелье прибавления" << "\n" << "2. Зелье квадратных корней" << "\n" << "3. Зелье простых чисел" << "\n" << "Выберите зелье для варки(1 / 2 / 3)" << "\n";
	cin >> x;
	if (x == 1) {
		int a1, b1;
		cout << "Введите первый ингредиент: ";
		cin >> a1;
		cout << "Введите второй ингредиент: ";
		cin >> b1;
		cout << "Сварить Зелье сложения..." << "\n" << "Результат: " << a1 + b1;
	}
	else if (x == 2) {
		int a2, b2, c2;
		double cor1, cor2, d;
		cout << "Введите значение для “a”: ";
		cin >> a2;
		cout << "Введите значение для “b”: ";
		cin >> b2;
		cout << "Введите значение для “c”: ";
		cin >> c2;
		d = pow(b2, 2) - 4 * a2 * c2;
		cor1 = ((-1) * b2 + pow(d, 0.5)) / 2 * a2;
		cor2 = ((-1) * b2 - pow(d, 0.5)) / 2 * a2;
		cout << "Приготовление зелья квадратичных корней..." << "\n" << "Корень 1: " << cor1 << "\n" << "Корень 2: " << cor2;
	}
	else if (x == 3) {
		int a3;
		cout << "Введите ингредиент (n): ";
		cin >> a3;
		cout << "Приготовление зелья простых чисел...";
		cout << "Простые числа до " << a3 << ": ";
		for (int i = 0; i <= a3; i++) {
			if (Prostoe(i) == true) {
				cout << i << ", ";
			}
		}
	}
	return 0;
}
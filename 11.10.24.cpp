#include "Butakov.h"
#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// Арифметические операции
	float b = Sum(2.5, 23);
	cout << "Сумма = " << b << endl;
	int c = Sum(4, 9);
	cout << "Сумма = " << c << endl;

	float d = Vch(12.5, 2.8);
	cout << "Вычитание = " << d << endl;
	int f = Vch(2, 8);
	cout << "Вычитание = " << f << endl;

	float e = Umn(4.4, 24.8);
	cout << "Умножение = " << e << endl;
	int r = Umn(5, 3);
	cout << "Умнодение = " << r << endl;

	float h = Del(12, 2);
	cout << "Деление = " << h << endl;
	int t = Del(8, 4);
	cout << "Деление = " << t << endl;

	float j = Delost(18, 15);
	cout << "Деление с остатком = " << j << endl;
	int z = Delost(7, 3);
	cout << "Деление с остатком = " << z << endl;


	// Логические операции
	float a1 = E(12.5, 24.8);
	cout << "\n12.5 == 24.8: "<< a1 << endl;
	int h1 = E(13, 22);
	cout << "13 == 22: " << h1 << endl;

	float a2 = N(12.5, 24.8);
	cout << "12.5 != 24.8: " << a2 << endl;
	int h2 = N(15, 17);
	cout << "15 != 17: " << h2 << endl;

	float a3 = G(12.5, 24.8);
	cout << "12.5 > 24.8: " << a3 << endl;
	int h3 = G(16, 12);
	cout << "16 > 12: " << h3 << endl;

	float a4 = L(12.5, 24.8);
	cout << "12.5 < 24.8: " << a4 << endl;
	int h4 = L(11, 20);
	cout << "11 < 20: " << h4 << endl;

	float a5 = G1(12.5, 24.8);
	cout << "12.5 >= 24.8: " << a5 << endl;
	int h5 = G1(19, 14);
	cout << "19 >= 14: " << h5 << endl;

	float a6 = L1(12.5, 24.8);
	cout << "12.5 <= 24.8: " << a6 << endl;
	int h6 = L1(21, 17);
	cout << "21 <= 17: " << h6 << endl;

	float a7 = L2(12, 15);
	cout << "12 && 15: " << a7 << endl;
	int h7 = L2(22, 15);
	cout << "22 && 15: " << h7 << endl;

	float a8 = L3(32, 25);
	cout << "32 || 25: " << a8 << endl;
	int h8 = L3(22, 10);
	cout << "22 || 10: " << h8 << endl;

	float a9 = L4(30.7);
	cout << "!30: " << a9 << endl;
	int h9 = L4(40.2);
	cout << "!40: " << h9 << endl;

	// Минимум и Максимум
	float x = 10.5, y = 2.5;
	cout << "\nМинимум: " << Min(x, y) << endl;
	cout << "Максимум: " << Max(x, y) << endl;

	int x = 10.5, y = 2.5;
	cout << "Минимум: " << Min(x, y) << endl;
	cout << "Максимум: " << Max(x, y) << endl;
	return 0;
}

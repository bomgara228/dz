// Иванов Ярослав
#include <iostream>
using namespace std;

int main() {
	/*Boolean1◦
. Дано целое число A. Проверить истинность высказывания: «Число A является положительным».*/
	/*
	int a;
	bool res;
	cin >> a;
	res = a > 0;
	cout << boolalpha << res << endl;
	return 0;*/

	/*
	Boolean2◦
		.Дано целое число A.Проверить истинность высказывания : «Число A является нечетным».*/
	/*
	int a,b;
	b = 2;
	bool res;
	cin >> a ;
	res = a %2 != 0;
	cout << boolalpha << res << endl;*/

	/*Boolean3◦
. Дано целое число A. Проверить истинность высказывания: «Число A является четным».*/
	/*
	int a, b;
	b = 2;
	bool res;
	cin >> a;
	res = a % 2 == 0;
	cout << boolalpha << res << endl;*/

	/*Boolean4◦
   Даны два целых числа: A, B. Проверить истинность высказывания:
    «Справедливы неравенства A > 2 и B ≤ 3».*/
	
	int a, b;
	bool res;
	cin >> a >> b;
	res = a > 2 and b <=  3;
	cout << boolalpha << res << endl;
}

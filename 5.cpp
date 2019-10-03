#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double xt, x, v, t, a, g=-9.8;
	cout << "Введите значение x0, v0, t: \n";
	cin >> x >> v >> t;
	a = v / t;
	xt = x + (v * t) + (a * t * t) / 2;
	
	cout << xt;
	return 0;
}
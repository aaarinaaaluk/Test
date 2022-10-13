// Лаба 1 Задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	//a)
	int a, b, c;
	cout << "Введи длину, ширину и высоту\n";
	cin >> a >> b >> c;
	int V, S;
	V = a * b * c;
	S = 2 * (a * c + b * c);
	cout << "volume = " << V << "\nsquare = " << S << "\n";

	//b)
	double s;
	cout << "Придумай и введи площадь круга, по-братски\n";
	cin >> s;
	double l;
	l = 2 * sqrt(M_PI * s);
	cout << l << "\n";

	//c)
	double x, y, z, p;
	cout << "Урони свои циферки, красавица (желательно длины сторон треугольника)\n";
	cin >> x >> y >> z;
	p = (x + y + z) / 2;
	double square;
	square = sqrt(p * (p - x) * (p - y) * (p - z));
	cout << square << "\n";

	//d)
	// тут требуются дополнительные данные
	double n, m;
	double P;
	double sq;
	double alf;

	cout << "Введи длину и угол, будь лапочкой\n";
		cin >> n >> m >> alf;

	P = (a + b) * 2;
	sq = a * b * sin(alf);

	cout << p << ' ' << sq;

	return 0;
}

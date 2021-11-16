#include <iostream>
#include<clocale>
#include<cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL,"rus");
	double x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0, x4, y4, dl1, dl2, dl3, P, S, dl41, dl42, dl43, P1, P2, P3, S1, S2, S3;
	const float eps = 0.0000000001;

	cout << "введите координаты вершин треугольника:" << endl;
	cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
	cout << "введите точку:" << endl; 
	cin >> x4 >> y4;

	dl1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	dl2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	dl3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	P = (dl1 + dl2 + dl3) / 2;
	S = sqrt(P * (P - dl1) * (P - dl2) * (P - dl3));

	dl41 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
	dl42 = sqrt(pow(x4 - x2, 2) + pow(y4 - y2, 2));
	dl43 = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));

	P1 = (dl1 + dl41 + dl43) / 2;
	P2 = (dl2 + dl41 + dl42) / 2;
	P3 = (dl3 + dl42 + dl43) / 2;

	S1 = sqrt(P1 * (P1 - dl1) * (P1 - dl41) * (P1 - dl43));
	S2 = sqrt(P2 * (P2 - dl2) * (P2 - dl41) * (P2 - dl42));
	S3 = sqrt(P3 * (P3 - dl3) * (P3 - dl42) * (P3 - dl43));
//ioiwruirhgergerg
	if ((S - S1 - S2 - S3) < eps) cout << "точка в треугольнике";
	else cout << "точка вне треугольника";
}